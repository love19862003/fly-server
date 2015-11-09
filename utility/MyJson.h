/********************************************************************

  Filename:   MyJson

  Description:MyJson

  Version:  1.0
  Created:  8:4:2015   11:01
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __MyJson_H__
#define __MyJson_H__
#include <boost/noncopyable.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/foreach.hpp>
#include <boost/lexical_cast.hpp>
#include "utility/StringUtility.h"

namespace ShareSpace {
  namespace Utility {
     class MyJson  : public boost::noncopyable
     {
     public:
       explicit MyJson(const std::string& file) : m_tree(){
         boost::property_tree::json_parser::read_json(file, m_tree);
       }
       explicit MyJson(std::stringstream& ss) : m_tree() {
         boost::property_tree::json_parser::read_json(ss, m_tree);
       }
       explicit MyJson(const boost::property_tree::ptree& tree) : m_tree(tree) {

       }
       explicit MyJson() : m_tree(){

       }

       std::string toString() {
         std::stringstream ss;
         boost::property_tree::json_parser::write_json(ss, m_tree);
         return ss.str();
       }

       template< typename  T>
       T get(const std::string& path, const T& t = T()) const {
         return m_tree.get(path, t);
       }

       template < typename T>
       void get(const std::string& path, std::vector<T>& container) {
         using boost::property_tree::ptree;
         BOOST_FOREACH(ptree::value_type& v, m_tree.get_child(path)) {
           container.push_back(boost::lexical_cast<T>(v.second.data()));
         }              
       }

       template < typename T>
       void getGroup(const std::string& path,
                     std::function<T&(const MyJson&)> fun) const{
         using boost::property_tree::ptree;
         fun(MyJson(m_tree.get_child(path)));
       }

       template < typename T>
       void getGroup(const std::string& path, 
                     std::vector<T>& container, 
                     std::function<T(const MyJson&)> fun) const {
         using boost::property_tree::ptree;
         BOOST_FOREACH(ptree::value_type& v, m_tree.get_child(path)) {
           MyJson t(v.second);
           container.push_back(fun(t));
         }
       }
       template < typename T>
       void set(const std::string& node, const T& t) {
         m_tree.put(node, t);
       }
       template< typename T>
       void addArray(const std::string& node, std::vector<T>& arr) {
         Utility::MyJson tree;
         for (auto& t : arr){
           tree.m_tree.add("", t);
         }
         m_tree.push_back(std::make_pair(node, tree.m_tree));
       }

       void addTreeArray(const std::string& node, std::vector<MyJson>& arr) {
         Utility::MyJson tree;
         for(auto& t : arr) {
           tree.m_tree.push_back(std::make_pair("", t.m_tree));
         }
         m_tree.push_back(std::make_pair(node, tree.m_tree));
       }
       
       bool saveToFile(const std::string& file_name) {
         using boost::property_tree::wptree;
         try {
           write_json(file_name, m_tree);
           return true;
         } catch(...) {
           std::cout << "write json file error : " << file_name << std::endl;
           return false;
         }
       }
     protected:
       boost::property_tree::ptree m_tree;
     };

     class MyJson2 : public boost::noncopyable {
     public:
       explicit MyJson2(const std::string& file) : m_tree() {
         boost::property_tree::json_parser::read_json(file, m_tree);
       }
       explicit MyJson2(std::wstringstream& ss) : m_tree() {
         boost::property_tree::json_parser::read_json(ss, m_tree);
       }
       explicit MyJson2(const boost::property_tree::wptree& tree) : m_tree(tree) {

       }
       explicit MyJson2() : m_tree() {

       }

       std::string toString() {
         std::wstringstream ss;
         boost::property_tree::json_parser::write_json(ss, m_tree);
         return wstrToUtf8(ss.str());
       }

       std::wstring changeKey(const std::string& key) {
         return utf8ToWstr(key);
       }

       template<typename T>
       T get(const std::string& path,  const T& t = T()) {
         return m_tree.get(changeKey(path), t);
       }

       template<typename T>
       std::string get(const std::string& node, const std::string& t = std::string()) {
         return wstrToUtf8(m_tree.get(changeKey(node), changeKey(t)));
       }

       template < typename T>
       void get(const std::string& path, 
                std::vector<T>& container) {
         using boost::property_tree::wptree;
         BOOST_FOREACH(wptree::value_type& v, m_tree.get_child(changeKey(path))) {
           container.push_back(boost::lexical_cast<T>(v.second.data()));
         }
       }
       template < typename T>
       void getGroup(const std::string& path,
                     std::function<T&(const MyJson2&)> fun) {
         using boost::property_tree::wptree;
         fun(MyJson2(m_tree.get_child(changeKey(path))));
       }

       template < typename T>
       void getGroup(const std::string& path,
                     std::vector<T>& container,
                     std::function<T(const MyJson2&)> fun) {
         using boost::property_tree::wptree;
         BOOST_FOREACH(wptree::value_type& v, m_tree.get_child(changeKey(path))) {
           MyJson2 tree(v.second);
           container.push_back(fun(tree));
         }
       }
       template < typename T>
       void set(const std::string& node, const T& t) {
         m_tree.put(changeKey(node), t);
       }

      /* template <std::string>*/
       void set(const std::string& node, const std::string& t) {
         m_tree.put(changeKey(node), changeKey(t));
       }

       template< typename T>
       void addArray(const std::string& node, std::vector<T>& arr) {
         Utility::MyJson2 tree;
         for(auto& t : arr) {
           tree.m_tree.add(L"", t);
         }
         m_tree.push_back(std::make_pair(changeKey(node), tree.m_tree));
       }
       /*template<std::string>*/
       void addArray(const std::string& node, std::vector<std::string>& arr) {
         Utility::MyJson2 tree;
         for(auto& t : arr) {
           tree.m_tree.add(L"", changeKey(t));
         }
         m_tree.push_back(std::make_pair(changeKey(node), tree.m_tree));
       }
       void addTreeArray(const std::string& node, std::vector<MyJson2>& arr) {
         Utility::MyJson2 tree;
         for(auto& t : arr) {
           tree.m_tree.push_back(std::make_pair(L"", t.m_tree));
         }
         m_tree.push_back(std::make_pair(changeKey(node), tree.m_tree));
       }

       bool saveToFile(const std::string& file_name) {
         using boost::property_tree::wptree;
         try {
           write_json(file_name, m_tree);
           return true;
         } catch(...) {
           std::cout << "write json file error : " << file_name << std::endl;
           return false;
         }
       }
     protected:
       boost::property_tree::wptree m_tree;
     };



  }
}
#endif