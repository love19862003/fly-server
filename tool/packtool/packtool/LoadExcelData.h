/********************************************************************

  Filename:   LoadExcelData

  Description:LoadExcelData

  Version:  1.0
  Created:  15:4:2015   10:10
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __LoadExcelData_H__
#define __LoadExcelData_H__
#include <string>
#include <list>
#include <map>
#include <set>
#include <vector>
#include "MapTemplate.h"
namespace ToolSpace {

  enum TypeEnum{
    TYPE_INT = 0,           // 数值类型
    TYPE_STRING = 1,        // 字符串类型
    TYPE_ARRAY = 2,         // 数字数组类型
    TYPE_GROUP = 3,         // 数字矩阵类型
    TYPE_ENUM = 4,          // 枚举
    TYPE_SELF = 5,          // 自定义枚举类型
    TYPE_NODERIVE = 6,      // 无用
    TYPE_MAX,
  };

  enum {
    row_name = 0,         //名字
    row_type = 1,         //类型
    col_id = 0,
    col_file = 0,
    col_name = 1,
    col_becheck = 0,
    col_check_condition = 1,
  };

  //枚举定义
  struct stEnumValue {
    std::string name; //枚举值名字
    int value;        //枚举定义的值
    std::string comment;  //注释
  };
  struct stEnum {
    std::string fullName;  //枚举全名字
    std::string table;   //表名字
    std::string name;   //枚举名字
    std::map<std::string, stEnumValue>  values; //枚举定义值

    bool operator < (const stEnum& l) const{
     return fullName < l.fullName;
    }
  };
 
  //数据头定义
  struct stHead {
    std::string name;     //字段名字
    TypeEnum type;        //字段类型
    int index;            //字段下标
    std::string type_name;//类型名字
    std::string comment;  //注释
    std::string table;    //所属表
  };

  //数据记录
  struct stValue {
    int index;
    std::string value;
  };
  struct  stRecord {
    int id;
    ObjectMap<int, stValue> record;
  };

  //数据检测
  struct stCheckParam {
    enum CCType {
      _NONE_ = 0,       //不需要检测
      _ENUM_ = 1,       //检测是否在枚举范围
      _HEAD_ = 2,       //检测在表里是否有数据
      _INT_= 3,
    };
    std::shared_ptr<stHead> head;
    std::shared_ptr<stEnum> en;
    stEnumValue env;      //枚举数值
    CCType type;          //类型
    int index;            //第几个参数
  };
  
  typedef  std::vector<stCheckParam> VParams;
  struct stCheckField {
    int index;                          //检测的字段的ID
    std::vector<VParams> check_in; //检测的条件
  };

  struct stTableCheck {
    std::string table;
    std::map < std::string, stCheckField> checks;
  };
  class Table
  {
  public:
    typedef ObjPtrMap<int, stRecord> RecordMap;
    typedef RecordMap::value_type ReacordPtr;
    typedef ObjPtrMap<int, stHead> HeadMap;
    typedef HeadMap::value_type HeadPtr;
    explicit Table(const char* name);
    ~Table();
    const std::string&  tableName() const;
    bool addHead(std::shared_ptr<stHead>  head);
    bool addRecord(int index, std::shared_ptr<stRecord> record);
    const RecordMap& recordMap() const;
    const HeadMap& headMap() const;

    const HeadPtr& getHead(int index) const { return m_heads.getData(index); }
    const HeadPtr& getHead(const std::string& name) const;
    const ReacordPtr& getRecord(int id) const { return m_records.getData(id); }
  protected:
    Table& operator = (const Table&) = delete;
    Table(const Table&) = delete;
  private:
    HeadMap m_heads;
    RecordMap m_records;
    std::string m_name;
  };


  class TableManager
  {
  public:
    explicit TableManager( const char* file);
    ~TableManager();
    bool run();

    struct stPackMapping {
      std::string file;
      std::set<std::string> list;
    };
  private:
    typedef ObjPtrMap<std::string, Table> TableMap;
    typedef TableMap::value_type TablePtr;
    typedef ObjPtrMap<std::string, stPackMapping> PackMap;
    typedef PackMap::value_type PackMappingPtr;
    typedef ObjPtrMap<std::string, stEnum>EnumMap;
    typedef EnumMap::value_type EnumPtr;
    typedef ObjPtrMap<std::string, stTableCheck> CheckMap;
    typedef CheckMap::value_type CheckPtr;
  protected:
    TableManager& operator = (const TableManager&) = delete;
    TableManager(const TableManager&) = delete;
    bool loadEnumFile(PackMappingPtr ptr);
    bool loadRecordFile(PackMappingPtr ptr);
    bool loadCheckFile(PackMappingPtr ptr);
    bool isXLSX(const std::string&  str) const;
    stCheckParam getCheckParam(const std::string& str, int index);
    TypeEnum getType(const std::string& t) const;
    void log(const std::string& error);
    bool check() const;
    void commonDefine(const std::string&);
    void exportToProto();
    void exportToLua();
  private:
    enum {
      NAME_SPACE_INDEX = 0,
      ALL_CONFIG_NAME = 1,
      CONFIG_TAIL_NAME = 2,
      OUT_MANAGER_FILE_NAME = 3,
      OUT_DIR = 4,
      EXCEL_DIR = 5,
    };
    enum {
      ENUM_DEFINE_INDEX = 0,
      EXCEL_TO_PACK_INDEX = 1,
      OUT_SET_INDEX = 2,
      CHECK_SET_INDEX = 3,
    };
    TableMap m_tables;                    //所有记录
    PackMap m_packRecordMap;              //打包文件名字映射
    PackMap m_packEnumMap;                //枚举文件映射
    PackMap m_packCheckMap;               //数据检测文件映射
    std::string m_fileName;               //打开文件名字
    ObjPtrMap<std::string,stEnum> m_ens;  //枚举列表
    CheckMap m_checks;
    std::string m_nameSpace;              //命名空间
    std::string m_allConfigName;          //所有配置名字
    std::string m_configTailName;         //生成尾部名字
    std::string m_outDir;
    std::string m_excelDir;
    std::string m_outFileName = "AllConfig";
    std::string m_commonDefineName = "ConfigTypeGroup";
  };
}

#endif