/********************************************************************

  Filename:   LoadExcelData

  Description:LoadExcelData

  Version:  1.0
  Created:  15:4:2015   10:11
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#include "LoadExcelData.h"
#pragma warning (disable:4786)
#pragma warning (disable:4703)

//#include "BasicExcel.hpp"
#include <iostream>
#include <fstream>
#include <boost/algorithm/string/case_conv.hpp>
#include <boost/xpressive/xpressive_dynamic.hpp>
#include <boost/algorithm/string/find.hpp>
#include <boost/algorithm/string/classification.hpp>
#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string.hpp>
#include <libxl.h>

//using namespace YCompoundFiles;
using namespace libxl;
namespace ToolSpace {

  //typedef std::shared_ptr<YExcel::BasicExcel> Book;
  //typedef YExcel::BasicExcelWorksheet Sheet;
//#define xlCreateBook() (std::make_shared<YExcel::BasicExcel>())
//#define getSheet(index) GetWorksheet(index)


  std::string toLower(const std::string& info) {
    auto v = info;
    boost::algorithm::to_lower(v);
    return v;
  }
  std::string toUpper(const std::string& info) {
    auto v = info;
    boost::algorithm::to_upper(v);
    return v;
  }
  std::vector<std::string> split(const std::string& str, const std::string& p)  {
    std::vector<std::string> v;
    boost::split(v, str, boost::is_any_of(p), boost::token_compress_on);
    return v;
  }

  std::string replace(const std::string& info, const std::string& r, const std::string& t) {
    using namespace boost::xpressive;
    auto v = info;
    boost::algorithm::ireplace_all(v, r, t);
    return v;
  }

  void wstrToUtf8Real(std::string& dest, const std::wstring& src) {
    dest.clear();
    for(size_t i = 0; i < src.size(); i++) {
      wchar_t w = src[i];
      if(w <= 0x7f)
        dest.push_back((char)w);
      else if(w <= 0x7ff) {
        dest.push_back(0xc0 | ((w >> 6) & 0x1f));
        dest.push_back(0x80 | (w & 0x3f));
      } else if(w <= 0xffff) {
        dest.push_back(0xe0 | ((w >> 12) & 0x0f));
        dest.push_back(0x80 | ((w >> 6) & 0x3f));
        dest.push_back(0x80 | (w & 0x3f));
      } else if(w <= 0x10ffff) {
        dest.push_back(0xf0 | ((w >> 18) & 0x07));
        dest.push_back(0x80 | ((w >> 12) & 0x3f));
        dest.push_back(0x80 | ((w >> 6) & 0x3f));
        dest.push_back(0x80 | (w & 0x3f));
      } else
        dest.push_back(' ');
    }
  }
  void utf8toWStrReal(std::wstring& dest, const std::string& src) {
    dest.clear();
    wchar_t w = 0;
    int bytes = 0;
    wchar_t err = L' ';
    for(size_t i = 0; i < src.size(); i++) {
      unsigned char c = (unsigned char)src[i];
      if(c <= 0x7f) {//first byte
        if(bytes) {
          dest.push_back(err);
          bytes = 0;
        }
        dest.push_back((wchar_t)c);
      } else if(c <= 0xbf) {//second/third/etc byte
        if(bytes) {
          w = ((w << 6) | (c & 0x3f));
          bytes--;
          if(bytes == 0)
            dest.push_back(w);
        } else
          dest.push_back(err);
      } else if(c <= 0xdf) {//2byte sequence start
        bytes = 1;
        w = c & 0x1f;
      } else if(c <= 0xef) {//3byte sequence start
        bytes = 2;
        w = c & 0x0f;
      } else if(c <= 0xf7) {//3byte sequence start
        bytes = 3;
        w = c & 0x07;
      } else {
        dest.push_back(err);
        bytes = 0;
      }
    }
    if(bytes)
      dest.push_back(err);
  }

  std::string WD2CH(const wchar_t* dest) {
    std::wstring wstr;
    if (dest){
      wstr = dest;
    }
    std::string str;
    wstrToUtf8Real(str, wstr);
    return str;
  }
  int S2I(const std::string& str) { 
     try
     {
       return std::stoi(str);
     }catch (...){
       return 0;
     }
  }
  std::wstring CH2WD(const std::string& dest) {
    std::wstring str;
    utf8toWStrReal(str, dest);
    return str;
  }
  std::string read(Sheet* sheet, int row, int col, Book* book, int type = TYPE_MAX) {
    std::string str("");
    auto t = sheet->cellType(row, col);
    switch(t) {
    case libxl::CELLTYPE_EMPTY:
      break;
    case libxl::CELLTYPE_NUMBER: {
      int n = sheet->readNum(row, col);
      str = std::to_string(n);
    } break;
    case libxl::CELLTYPE_STRING:{
      auto p = sheet->readStr(row, col);
      if(p) {
        wstrToUtf8Real(str, p);
      }
    } break;
    case libxl::CELLTYPE_BOOLEAN:{
      auto b = sheet->readBool(row, col);
      if (b){
        str = "1";
      } else { str = "0"; }
    }break;
    case libxl::CELLTYPE_BLANK:
      break;
    case libxl::CELLTYPE_ERROR:
      break;
    default:
      break;
    }
    return str;
  }

  std::string readComment(Sheet* sheet, int row, int col, Book* book) {
    std::string str("");
    auto p = sheet->readComment(row, col);
    if (p){
      wstrToUtf8Real(str, p);
    }
    return str;
  }

  const char* gTypeName[TYPE_MAX] = {"int", "string", "array", "group", "enum", "define", "noderive"};

  TypeEnum getDefType(const std::string& t) {
    for(int i = TYPE_INT; i < TYPE_MAX; ++i) {
      if(toLower(t) == gTypeName[i]) {
        return static_cast<TypeEnum>(i);
      }
    }
    return  TYPE_MAX;
  }

  
  Table::Table(const char* name) : m_name(name) {

  }
  Table::~Table() {

  }
  const std::string& Table::tableName() const {
    return m_name;
  }

  const Table::RecordMap& Table::recordMap() const {
    return m_records;
  }
  const Table::HeadPtr& Table::getHead(const std::string& name) const {
    auto& hm = m_heads.constRefMap();
    for (auto& pair: hm){
      auto& p = pair.second;
      if (toLower(p->name) == name){
        return p;
      }
    }
    return m_heads.optional();
  }
  const Table::HeadMap& Table::headMap() const {
    return  m_heads;
  }
  bool Table::addHead(std::shared_ptr<stHead>  head) {
    return m_heads.addData(head->index, head);
  }
  bool Table::addRecord(int index, std::shared_ptr<stRecord> record) {
    return m_records.addData(index, record);
  }



  TableManager::TableManager( const char* file)
  : m_fileName(file){

  }
  TableManager::~TableManager() {

  }
  bool TableManager::run() {
    Book* book = nullptr;
    if(isXLSX(m_fileName)) {
      book = xlCreateXMLBook();
    } else {
      book = xlCreateBook();
    }
    if (!book){
      return false;
    }

    if (!book->load(CH2WD(m_fileName).c_str())){
      log("open file " + m_fileName + "failed!");
      return false;
    }

    Sheet* sheetEnum = book->getSheet(ENUM_DEFINE_INDEX);
    if(sheetEnum) {
     // auto enumName = WD2CH(sheetEnum->name());
     // log(enumName);
      for(int row = 0; row < sheetEnum->lastRow(); ++row) {
        std::string file = read(sheetEnum, row, col_file, book);
        std::string file2 = toLower(read(sheetEnum, row, col_name, book));
        
        if (file.empty() ||  file2.empty()){
          break;
        }
        auto ptr = m_packEnumMap.getData(file);
        if (!ptr){
          ptr = std::make_shared<stPackMapping>();
          m_packEnumMap.addData(file, ptr);
          ptr->file = file;
        }
        ptr->list.insert(file2);
      }
    }
    Sheet* sheetRecord = book->getSheet(EXCEL_TO_PACK_INDEX);
    if (sheetRecord){
      auto recordName = WD2CH(sheetRecord->name());
      log(recordName);
      for(int row = 0; row < sheetRecord->lastRow(); ++row) {
        std::string file = read(sheetRecord, row, col_file, book);
        std::string file2 = toLower(read(sheetRecord, row, col_name, book));

        if(file.empty() || file2.empty()) {
          break;
        }

        auto ptr = m_packRecordMap.getData(file);
        if(!ptr) {
          ptr = std::make_shared<stPackMapping>();
          m_packRecordMap.addData(file, ptr);
          ptr->file = file;
        }
        ptr->list.insert(file2);
      }
    }

    Sheet* sheetConfig = book->getSheet(OUT_SET_INDEX);
    if (sheetConfig){
      auto conName = WD2CH(sheetConfig->name());
      log(conName);
      m_nameSpace = read(sheetConfig, NAME_SPACE_INDEX, col_file, book);
      m_allConfigName = read(sheetConfig, ALL_CONFIG_NAME, col_file, book);
      m_configTailName = read(sheetConfig, CONFIG_TAIL_NAME, col_file, book);
      m_outDir = read(sheetConfig, OUT_DIR, col_file, book);
      m_excelDir = read(sheetConfig, EXCEL_DIR, col_file, book);
      m_outFileName = read(sheetConfig, OUT_MANAGER_FILE_NAME, col_file, book);

      if(m_nameSpace.empty() || m_allConfigName.empty() || m_configTailName.empty() || m_outDir.empty() || m_excelDir.empty() || m_outFileName.empty()) {
        assert(false);
        return false;
      }
    } else {
      assert(false);
    }
    Sheet* sheetCheck = book->getSheet(CHECK_SET_INDEX);
    if (sheetCheck){
      auto checkName = WD2CH(sheetCheck->name());
      log(checkName);
      for(int row = 0; row < sheetCheck->lastRow(); ++row) {
        std::string file = read(sheetCheck, row, col_file, book);
        std::string file2 = toLower(read(sheetCheck, row, col_name, book));

        if(file.empty() || file2.empty()) {
          break;
        }

        auto ptr = m_packCheckMap.getData(file);
        if(!ptr) {
          ptr = std::make_shared<stPackMapping>();
          m_packCheckMap.addData(file, ptr);
          ptr->file = file;
        }
        ptr->list.insert(file2);
      }
    } else {
      assert(false);
    }

    //book.reset();
    book->release();

    const auto& enumMap = m_packEnumMap.constRefMap();
    for (auto& pair : enumMap){
      auto p = pair.second;
      if(!loadEnumFile(p)) { return false; }
    }

    const auto& recordMap = m_packRecordMap.constRefMap();
    for(auto& pair : recordMap) {
      auto p = pair.second;
      if(!loadRecordFile(p)) { return false; }
    }

    const auto& checkMap = m_packCheckMap.constRefMap();
    for(auto& pair : checkMap) {
      auto p = pair.second;
      if(!loadCheckFile(p)) { return false; }
    }

    if (!check()){
      return false;
    }

    //exportToProto();
    exportToLua();
    return true;
  }
  
  bool TableManager::check() const {
    auto& enMap = m_ens.constRefMap();
    for(auto& pair : enMap) {
      auto& en = pair.second;
      auto& table = m_tables.getData(toLower(en->table));
      if(table) {
        en->table = table->tableName();
        en->name = toUpper(en->name);
        en->fullName = en->table + "." + en->name;
      } else {
        std::cout << "not found en " << en->fullName << std::endl;
        return false; 
      }
    }
    auto& tableMap = m_tables.constRefMap();
    for (auto& pair : tableMap){
      auto& t = pair.second;
      const auto& hm = t->headMap();
      auto& rm = t->recordMap();

      for (auto& rpair : rm.constRefMap()){
        auto& r = rpair.second;
        for (auto& rrpair : r->record.constRefMap()){
          auto& v = rrpair.second;
          auto& h = hm.getData(v.index);
          // check has index
          if (!h){
            std::cout << "not found head " << t->tableName() << " index " << v.index << std::endl;
            return false;
          }
          // check enum
          if(h->type == TYPE_SELF) {
            if (!m_ens.hasData(toLower(h->type_name))){
              std::cout << "not found head en " << h->type_name << " index " << v.index << std::endl;
              return false;
            }
            auto& en = m_ens.getData(toLower(h->type_name));
            if (0 == en->values.count(toUpper(v.value))){
              if(!m_ens.hasData(toLower(h->type_name))) {
                std::cout << "not found head en " << h->type_name << " value " << v.value << std::endl;
                return false;
              }
              std::cout << "not found head en " << h->type_name << " value " << v.value << std::endl;
              return false;
            }
            h->type_name = en->fullName;
          }
        }
      }
    }
    return true;
  }
  bool TableManager::isXLSX(const std::string&  str) const {
    auto name = split(str, ".");
    if (name.size() >= 2 &&  "xlsx" == toLower(name.back())){
      return true;
    }
    return false;
  }
  bool TableManager::loadEnumFile(PackMappingPtr ptr) {
    Book* book = nullptr;
    if (isXLSX(ptr->file)){
      book = xlCreateXMLBook();
    } else {
      book = xlCreateBook();
    }
   
    if(!book) {
      return false;
    }
    std::string path = m_excelDir + ptr->file;

    if(book->load(CH2WD(path).c_str())) {
      for(int index = 0; index < book->sheetCount(); ++index) {
        auto sheet = book->getSheet(index);
        if(ptr->list.count(toLower(WD2CH(sheet->name()))) > 0) {
          for(int col = 0; col < sheet->lastCol(); ++col) {
            std::shared_ptr<stEnum> en(new stEnum);
            en->fullName = read(sheet, row_name, col, book);   //table.enumName
            en->fullName = replace(en->fullName, " ", "");
            std::vector<std::string> nameV = split(en->fullName, ".");
            /*boost::split(nameV, en->fullName, boost::is_any_of("."), boost::token_compress_on);*/
            if (2 != nameV.size()){
              continue;
            }
            // enum name
            en->table = nameV[0];
            en->name = toUpper(nameV[1]);
            std::string t = read(sheet, row_type, col, book); //type == enum
            if(toLower(t) != gTypeName[TYPE_ENUM]) {
              continue;
            }
            if(en->fullName.empty()) {
              continue;
            }

            for(int row = row_type + 1; row < sheet->lastRow(); ++row) {
              std::string enValue = read(sheet, row, col, book);
              std::string comment = readComment(sheet, row, col, book);
              comment = replace(comment, "\n", "");
              comment = replace(comment, "\t", "");
              comment = replace(comment, " ", "");
              enValue = replace(enValue, " ", "");
              if (enValue.empty()){
                break;
              }
              std::vector<std::string> v = split(enValue, "=");
              //boost::split(v, enValue, boost::is_any_of("="), boost::token_compress_on);
              if (v.size() != 2){
                // log error
                continue;
              }
              stEnumValue ev;
              ev.name = toUpper(v[0]);
              ev.value = S2I(v[1]);
              ev.comment = comment;
              en->values.insert(std::make_pair(ev.name, ev));
            }

            m_ens.addData(toLower(en->fullName), en);
          }
        }
      }

      //book.reset();
      book->release();
      return true;
    }
    return false;
  }
  TypeEnum TableManager::getType(const std::string& t) const {
    if (m_ens.hasData(toLower(t))){
      return TYPE_SELF;
    }

    return getDefType(t);
  }
  void TableManager::log(const std::string& error) {
    std::cout << error << std::endl;
   // assert(false);
  }
  stCheckParam TableManager::getCheckParam(const std::string& str, int index) {
    stCheckParam param;
    param.head = nullptr;
    param.en = nullptr;
    param.type = stCheckParam::_NONE_;
    param.index = index;
    auto s = split(str, "=");
    if (s.size() == 2){
      if(toLower(s[0]) == toLower("table")) {
        auto tf = split(s[1], ".");
        if (tf.size() >= 2){
          auto t = m_tables.getData(toLower(tf[0]));
          if (t){
            auto h = t->getHead(tf[1]);
            if (h){
              param.type = stCheckParam::_HEAD_;
              param.head = h;
            } else {
              log("not found table filed in table:" + s[1]);
            }
          } else {
            log("not found table filed in table:" + s[1]);
          }
        } else {
          log("not found table filed in table:" + s[1]);
        }
      } else if(toLower(s[0]) == toLower("enum")) {
        auto tf = split(s[1], ".");
        if (tf.size() >= 2){
          auto enName = toLower(tf[0] + "." + tf[1]);
          auto en = m_ens.getData(enName);
          if (en){
            param.en = en;
            param.type = stCheckParam::_ENUM_;
            if (tf.size() >= 3){
               if (en->values.count(toUpper(tf[2]))){
                 param.env = en->values.at(toUpper(tf[2]));
               } else {
                 log("not found enum value in enum:" + en->fullName +" v:" + tf[2]);
               }
            }
          } else {
            log("not found enum value in enum:" + s[1]);
          }
        }
      } else if(toLower(s[0]) == toLower("int")) {
        param.env.value = S2I(s[1]);
        param.type = stCheckParam::_INT_;
      } else {
        // do nothing 
      }
       
    }
    return param;
  }
  bool TableManager::loadCheckFile(PackMappingPtr ptr) {
    Book* book = nullptr;
    if(isXLSX(ptr->file)) {
      book = xlCreateXMLBook();
    } else {
      book = xlCreateBook();
    }
    if(!book) {
      return false;
    }
    std::string path = m_excelDir + ptr->file;
    if(book->load(CH2WD(path).c_str())) {
      for(int index = 0; index < book->sheetCount(); ++index) {
        auto sheet = book->getSheet(index);
        if(ptr->list.count(toLower(WD2CH(sheet->name()))) > 0) {
          for(int row = 0; row < sheet->lastRow(); ++row) { 
            std::string becheck = read(sheet, row, col_becheck, book);
            std::string con = read(sheet, row, col_check_condition, book);
            if (becheck.empty()){
              break;
            }
            if (!con.empty()){
              auto tf = split(becheck, ".");
              if (tf.size() != 2){
                continue;
              }
              if(!m_tables.hasData(toLower(tf[0]))) {
                continue;
              }
              auto ptrCheck = m_checks.getData(toLower(tf[0]));
              if(!ptrCheck) {
                ptrCheck = std::make_shared<stTableCheck>();
                ptrCheck->table = tf[0];
                m_checks.addData(toLower(tf[0]), ptrCheck);
              }

              auto table = m_tables.getData(toLower(tf[0]));
              auto h = table->getHead(tf[1]);

              if (h){
                stCheckField cc;
                cc.index = h->index;
                auto v = split(con, ";");
                for (auto& s : v){
                  //s = replace(s, " ", "");
                  if (s.empty()){
                    continue;
                  }
                  VParams vparams;
                  auto vv = split(s, ",");
                  for(int i = 0; i < vv.size(); ++i) {
                    vparams.push_back(getCheckParam(vv[i], i));
                  }
                  cc.check_in.push_back(vparams);
                }
                ptrCheck->checks.insert(std::make_pair(h->name, cc));
              }
            }
          }
        }
      }
    }
    book->release();
    return true;
  }
  bool TableManager::loadRecordFile(PackMappingPtr ptr) {
    Book* book = nullptr;
    if(isXLSX(ptr->file)) {
      book = xlCreateXMLBook();
    } else {
      book = xlCreateBook();
    }
    if(!book) {
      return false;
    }
    book->setRgbMode(true);
    std::string path = m_excelDir + ptr->file;
    if(book->load(CH2WD(path).c_str())) {
      std::set<std::string> ss = ptr->list;
      for(int index = 0; index < book->sheetCount(); ++index) {
        auto sheet = book->getSheet(index);
        auto sheetName = WD2CH(sheet->name());
       
        if(ptr->list.count(toLower(sheetName)) > 0) {
          ss.erase(toLower(sheetName));
          TablePtr table(new Table(sheetName.c_str()));
          // add head
          for(int col = 0; col < sheet->lastCol(); ++col) { 
            std::string name = read(sheet, row_name, col, book);
            name = replace(name, " ", "");
            name = replace(name, "\n", "");
            name = replace(name, "\t", "");
            if (name.empty()){
              break;
            }
            std::string type = read(sheet, row_type, col, book);
            type = replace(type , " ", "");
            if (type.empty()){
              std::string er = book->errorMessage();
              std::cout << ptr->file << "sheet:" << sheetName << " head:" << name << " err:" <<er << std::endl;
            }
            std::string comment = readComment(sheet, row_name, col, book);
            TypeEnum t = getType(type);
            if (t != TYPE_MAX){
              std::shared_ptr<stHead> h(new stHead);
              if(col == col_id) {
                assert(t == TYPE_INT);
              }
              h->index = col + 1;
              h->name = toLower(name);
              h->type = t;
              h->type_name = type;
              h->table = table->tableName();
              h->comment = replace(comment, "\n", "");
              if(!table->addHead(h)) { assert(false);}
            }
          }
          // add record
           for(int row = row_type + 1; row < sheet->lastRow(); ++row) {
             std::shared_ptr< stRecord > r(new stRecord);
             for(int col = col_id; col < sheet->lastCol(); ++col) {
               if (col == col_id){
                 r->id = S2I(read(sheet, row, col_id, book));//sheet->readNum(row, col_id);
               }
               
               stValue v;
               v.index = col + 1;
               auto& hh = table->getHead(v.index);
               if (hh){
                 v.value = read(sheet, row, col, book, hh->type);
                 r->record.addData(col, v);
               } else {
                 break;
               }
              
              }
             if(r->id <= 0) {
               break;
             }
             if(!table->addRecord(r->id, r)) {
               log("add record in table:" + table->tableName() + "with record id:" + std::to_string(r->id));
             }
           }
          m_tables.addData(toLower(table->tableName()), table);
        }
      }

      if (ss.size() > 0){
        for (auto& s : ss){
          log("not found table:" + s + " in file" + path);
        }
      }
    } else {
      std::cout << "open " << path << " failed!" << std::endl;
    }
    //book.reset();
    book->release();
    return true;
  }

  void TableManager::commonDefine(const std::string& path) {
    auto CommonfileName = path + m_commonDefineName + ".proto";
    std::fstream commonOut(CommonfileName.c_str(), std::ios::out | std::ios::binary);
    std::string strCommn;
    if(!m_nameSpace.empty()) {
      strCommn = "package " + m_nameSpace + ";\n";
      commonOut.write(strCommn.c_str(), strCommn.length());
    }
    strCommn = "message " + m_commonDefineName + " {\n  repeated int32 array = 1; \n}";
    commonOut.write(strCommn.c_str(), strCommn.length());
  }
  void TableManager::exportToLua() {
    std::string luaPath = m_outDir + "\\lua\\" ;
    ObjectMap<std::string, std::set<EnumPtr> > tableEnum;
    for (auto& pair : m_ens.constRefMap()){
      auto& en = pair.second;
      auto name = en->table;
      if(tableEnum.hasData(name)) {
        auto& s = tableEnum.getData(name);
        s.insert(en);
      } else {
        std::set<EnumPtr> s;
        s.insert(en);
        tableEnum.addData(name, s);
      }
    }
    std::string enStr = "local EnumDefine = { \n";
    for (auto& pair : tableEnum.constRefMap()){
      enStr += "  " + pair.first + " = {\n";
      auto& s = pair.second;
      for (auto& en : s){
        enStr += "   " + en->name + " = {\n";
        for(auto& rp : en->values) {
          auto& rpp = rp.second;
          enStr += "      " + rpp.name + " = { value = " + std::to_string(rpp.value) + ", comment = \"" + rpp.comment + "\"},\n";
        }
        enStr += "    },\n";
      }
      enStr += "  },\n";
    }

    enStr += "}\nreturn EnumDefine \n";
    auto fileName = luaPath + "_GEnum.lua";
    std::fstream outEnum(fileName.c_str(), std::ios::out | std::ios::binary);
    outEnum.write(enStr.c_str(), enStr.length());
    outEnum.close();
    enStr.clear();

    std::string str;
    str = "local GTableType = { \n";
    auto& tableMap = m_tables.constRefMap();
    for(auto& pair : tableMap) { 
      auto& t = pair.second;
      str += "\n--GTableType table:" + t->tableName() + "\n";
      str += t->tableName() + " = {\n";
      auto& hm = t->headMap();
      for (auto& pp :  hm.constRefMap()){
        auto& h = pp.second;
         if(h->type == TYPE_NODERIVE) {
           continue;
         }
        str += " " + h->name + " = {\n  index=" + std::to_string(h->index) + ",\n  name=\"" + h->name + "\",\n  type=" + std::to_string((int)h->type) + ",\n  type_name=\"" + h->type_name + "\",\n  comment=\"" + h->comment + "\",\n  table=\"" + h->table +"\",\n},\n";
      }
      str += "},\n";

      std::string strData = "local " + t->tableName() + m_configTailName + " = {\n";
      auto& rm = t->recordMap();
      for(auto& rpp : rm.constRefMap()) {
        auto& rd = rpp.second;
        strData += " {\n";
        for(auto& rdp : rd->record.constRefMap()) {
          auto& rrd = rdp.second;
          auto& hp = hm.getData(rrd.index);
          switch(hp->type) {
          case TYPE_INT:{
            if (rrd.value.empty()){
              strData += "  " + hm.getData(rrd.index)->name + " = 0,\n";
            } else {
              strData += "  " + hm.getData(rrd.index)->name + " = " + rrd.value + ",\n";
            }
          }break;
          case TYPE_STRING:{
            strData += "  " + hm.getData(rrd.index)->name + " = \"" + rrd.value + "\" ,\n";
          }break;
          case TYPE_ARRAY:{
            std::vector<std::string> vvvv = split(rrd.value, ",");
            //boost::split(vvvv, rrd.value, boost::is_any_of(","), boost::token_compress_on);
            strData += "  " + hm.getData(rrd.index)->name + " = {";
            for (auto& vvvvv : vvvv){
              if(vvvvv.empty()) {
                continue;
              }
              strData += vvvvv + ",";
            }
            strData += "} ,\n";
          }break;
          case TYPE_GROUP:{
            //log(rrd.value);
            std::vector<std::string> vvvv = split(rrd.value, ";");
            //boost::split(vvvv, rrd.value, boost::is_any_of(";"), boost::token_compress_on);
            strData += "  " + hm.getData(rrd.index)->name + " = {";
            for(auto& vvvvv : vvvv) {
              if(vvvvv.empty()) { continue; }
              strData += "{ array = {";
              std::vector<std::string> tvvv = split(vvvvv, ",");
              //boost::split(tvvv, vvvvv, boost::is_any_of(","), boost::token_compress_on);
              for(auto& tvvvvv : tvvv) {
                if(tvvvvv.empty()) {
                  continue;
                }
                strData += tvvvvv + ",";
              }
              strData += "}},";
            }
            strData += "} ,\n";
          }break;
            //case TYPE_ENUM:{ }break;
          case TYPE_SELF:{
            strData += "  " + hm.getData(rrd.index)->name + " = \"" + toUpper(rrd.value) + "\" ,\n";
          }break;
          default:
            break;
          }
        }
        strData += " },\n";
      }  
      strData += "}\n";
      strData += "return " + t->tableName() + m_configTailName;

      auto outTypeData = luaPath + t->tableName() + ".lua";
      std::fstream dataOut(outTypeData.c_str(), std::ios::out | std::ios::binary);
      dataOut.write(strData.c_str(), strData.length());
      dataOut.close();
    }
    str += "}\n return GTableType \n";

    auto outTypefileName = luaPath + "_GTableType.lua";
    std::fstream outType(outTypefileName.c_str(), std::ios::out | std::ios::binary);
    outType.write(str.c_str(), str.length());
    outType.close();

    auto outDefine = luaPath + "_GGobalDefine.lua";
    str = "local gobalDefine = {\n";
    str += " nameSpace = \"" + m_nameSpace + "\",\n";
    str += " AllConfigName = \"" + m_allConfigName + "\",\n";
    str += " ConfigTailName = \"" + m_configTailName + "\",\n";
    str += " OutDir=\"" + m_outDir + "\",\n";
    str += " OutFileName=\"" + m_outFileName + "\",\n";
    str += " ConfigTypeGroup=\"" + m_commonDefineName + "\",\n";
    str += " TableList = {\n";
    for(auto& pair : tableMap) {
      auto& t = pair.second;
      str += "  \"" + t->tableName() +"\", \n";
    }
    str += " }\n";
    str += "}\nreturn gobalDefine ";
    std::fstream outDefineFile(outDefine.c_str(), std::ios::out | std::ios::binary);
    outDefineFile.write(str.c_str(), str.length());
    outDefineFile.close();

    std::string checkStr = "local GTableCheck = {\n";
    for (auto& pair : m_checks.constRefMap()){
      auto p = pair.second;
      checkStr += p->table + " = {\n";
      for (auto& ppair : p->checks){
        checkStr += + " "+ ppair.first + "= {\n";
        auto& field = ppair.second;
        checkStr += "   index = " + std::to_string(field.index) + ",\n   condition = {\n";
        for (auto& param : field.check_in){
          checkStr += "       {\n";
          for (auto& cc : param){
            checkStr += "         {type = " + std::to_string(cc.type) + "," ;
            checkStr += " index = " + std::to_string(cc.index) + ",";
            if(cc.type == stCheckParam::_ENUM_ && cc.en) {
              checkStr += "table = \"" + cc.en->table + "\",";
              checkStr += "enum = \"" + cc.en->name + "\",";
              if (cc.env.name.empty()){
                checkStr += "value = nil,";
              } else {
                checkStr += "value = \"" + cc.env.name + "\",";
              }
            }
            if(cc.type == stCheckParam::_HEAD_ && cc.head) {
              checkStr += "table = \"" + cc.head->table + "\",";
              checkStr += "head = \"" + cc.head->name + "\",";
            }
            if (cc.type == stCheckParam::_INT_){
              checkStr += "value = " + std::to_string(cc.env.value) + ",";
            }
            checkStr += "},\n";
          }
          checkStr += "       },\n";
          
        }
        checkStr += "     }\n   },\n";
      }
      checkStr += "},\n";
    }
    checkStr += "}\n return GTableCheck";

    auto checkFileName = luaPath + "_GCheck.lua";
    std::fstream outCheck(checkFileName.c_str(), std::ios::out | std::ios::binary);
    outCheck.write(checkStr.c_str(), checkStr.length());
    outCheck.close();
  }
  void TableManager::exportToProto() {
    std::string protoPath = m_outDir + "\\proto\\";
    commonDefine(protoPath);
    auto& tableMap = m_tables.constRefMap();
    for(auto& pair : tableMap) {
      auto& t = pair.second;
      const auto& hm = t->headMap();
      auto& rm = t->recordMap();

      auto fileName = protoPath + t->tableName() + m_configTailName + ".proto";
      std::fstream out(fileName.c_str(), std::ios::out | std::ios::binary);
      std::string str;
      //д�����ֿռ�
      if (!m_nameSpace.empty()){
        str = "package " + m_nameSpace + ";\n";
        out.write(str.c_str(), str.length());
      }
      //д�붨��
      str = "import \"" + m_commonDefineName +".proto\";\n";
      out.write(str.c_str(), str.length());

      //���������ļ�
      for (auto& hpair : hm.constRefMap()){
        auto& h = hpair.second;
        if(h->type == TYPE_SELF) {
          auto en = m_ens.getData(toLower(h->type_name));
          if (!en){
            assert(false);
          }
          if(toLower(en->table) == toLower(t->tableName())) {
            continue;
          }
          str = "import \"" + en->table + m_configTailName + ".proto\";\n";
          out.write(str.c_str(), str.length());
        }
      }
      //д����Ϣ����
      str = "message " + t->tableName() + m_configTailName + "{\n";
      out.write(str.c_str(), str.length());
      //д��ö�ٶ���
      for (auto& enPair : m_ens.constRefMap()){
        auto& en = enPair.second;
        if (toLower(en->table) == toLower(t->tableName())){
          str = "  enum " + toUpper(en->name) + "{\n";
          out.write(str.c_str(), str.length());
          for (auto&  envPair : en->values){
            auto& env = envPair.second;
            str = "    " + toUpper(env.name) + " = " + std::to_string(env.value);
            str += ";//" + env.comment +"\n";
            out.write(str.c_str(), str.length());
          }
          str = "  };\n";
          out.write(str.c_str(), str.length());
        }
      }

      for(auto& hpair : hm.constRefMap()) {
        auto& h = hpair.second;
        str = "";
        switch(h->type) {
        case TYPE_INT:{ 
          str = "  optional int32 " + h->name + " = " + std::to_string(h->index) + ";" + "//" + h->comment + "\n";
        }break;
        case TYPE_STRING:{ 
          str = "  optional string " + h->name + " = " + std::to_string(h->index) + ";" + "//" + h->comment + "\n";
        }break;
        case TYPE_ARRAY:{ 
          str = "  optional " + m_commonDefineName+ " " + h->name + " = " + std::to_string(h->index) + "; " + "//" + h->comment + "\n";
        }break;
        case TYPE_GROUP:{ 
          str = "  repeated " + m_commonDefineName + " " + h->name + " = " + std::to_string(h->index) + ";" + "//" + h->comment + "\n";
        }break;
        //case TYPE_ENUM:{ }break;
        case TYPE_SELF:{
          auto en = m_ens.getData(toLower(h->type_name));
          if(!en) {
            assert(false);
          }
          if(toLower(en->table) == toLower(t->tableName())) {
            str = "  optional " + en->name + " " + toLower(h->name) + " = " + std::to_string(h->index ) + ";" + "//" + h->comment + "\n";
          } else {
            str = "  optional " + en->table + m_configTailName + "." + en->name + " " + toLower(h->name) + " = " + std::to_string(h->index) + ";" + "//" + h->comment + "\n";
          }
        }break;
        default: 
          break;
        }

        if (!str.empty()){
          out.write(str.c_str(), str.length());
        }
      }

      str = "}\n";
      out.write(str.c_str(), str.length());
      out.close();
    }
  }

}