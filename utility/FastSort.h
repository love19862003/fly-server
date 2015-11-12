/********************************************************************

  Filename:   FastSort

  Description:FastSort

  Version:  1.0
  Created:  11:11:2015   14:17
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __FANNY_FastSort_H__
#define __FANNY_FastSort_H__
#include <assert.h>
#include <string.h>
#include <memory>

//分段
template<typename Key>
struct Hash {
  size_t operator()(const Key& key, size_t size) const { 
    if(key >= size - 1) { return 0; }
    return size - 1 - key; 
  }
};
//排序比较
template<typename Data>
struct Compare {
  bool operator() (const Data& l, const Data& r) const{
    return l > r;
  }
};
//相等比较
template<typename Data>
struct Equal {
  bool operator()(const Data& l, const Data& r) const {
    return l == r;
  }
};
template< typename Key,
          typename Data,
          typename HashFun = Hash<Key>,
          typename EqualFun = Equal<Data>,
          typename CompareFun = Compare<Key>>
class EFastSort {
public:
  typedef Key         key_type;
  typedef Data        value_type;
  typedef EqualFun    equal_fun;
  typedef HashFun     hash_fun;
  typedef CompareFun  compare_fun;

  struct Content {
    value_type  data;
    Content* next;
  };
  struct Node {
    unsigned int count;
    Content* content;
  };
public:
  EFastSort(size_t s) : m_size(s + 1) {
    m_data = (Node**)malloc(sizeof(Node*) * m_size);
    memset(m_data, 0x0, sizeof(Node*) * m_size);
    m_memory = sizeof(Node*) * m_size;
  }
  ~EFastSort() {
    for(size_t i = 0; i < m_size; ++i) {
      Node* node = m_data[i];
      if(nullptr == node) { continue; }
      Content* current = node->content;
      while(nullptr != current) {
        Content* father = current;
        current = current->next;
        delete father;
      }
      delete node;
      m_data[i] = nullptr;
    }
    free(m_data);
  }

  void add(const key_type& key,const value_type& v) {
    Content* p = new Content;
    p->data = v;
    p->next = nullptr;
    addContent(key, p);
  }
  bool getRankList(unsigned int count, std::vector<value_type>& rank) const {
    for(size_t i = 0; i < m_size; ++i) {
      Node* pNode = m_data[i];
      if(nullptr != pNode) {
        Content* current = pNode->content;
        while(current &&  count > 0) {
          rank.push_back(current->data);
          current = current->next;
          --count;
        }
        if(count <= 0) { return true; }
      }
    }
    return true;
  }
  //排序
  bool move(const key_type& oldKey, const key_type& newKey, const value_type& data) {
    Node* pOld = getNode(oldKey);
    if(nullptr == pOld) { return false; }
    assert(nullptr != pOld);
    Content* current = pOld->content;
    Content* father = nullptr;
    while(nullptr != current) {
      if(m_ef(data, current->data)) {
        if(nullptr != father) { father->next = current->next; }
        else { pOld->content = current->next; }
        --pOld->count;
        current->data = data;
        current->next = nullptr;
        addContent(newKey, current);
        return true;
      } else {
        father = current;
        current = current->next;
      }
    }
    return false;
  }

  size_t bytes()const { return m_memory; }
protected:
  void addContent(const key_type& key, Content* p) {
    Node* pNode = checkNode(key);
    pNode->count++;
    m_memory += sizeof(Content);
    m_count++;
    if(nullptr == pNode->content) {
      pNode->content = p;
      return;
    }
    //单个段位排序
    Content* current = pNode->content;
    Content* father = nullptr;
    while(nullptr != current) {
      if (m_cf(current->data, p->data)){
        if(father) { father->next = p; p->next = current; }
        else { pNode->content = p; p->next = current; }
        return;
      } else {
        father = current;
        current = father->next;
      }
    }
    father->next = p;
  }
  Node* checkNode(const key_type& key) {
    //获取桶
    size_t index = getKeyIndex(key);
    if(nullptr == m_data[index]) {
      Node* p = new Node;
      p->content = nullptr;
      p->count = 0;
      m_data[index] = p;
      m_memory += sizeof(Node);
    }
    return m_data[index];
  }
  Node* getNode(const key_type& key) { 
    return  m_data[getKeyIndex(key)];
  }
  size_t getKeyIndex(const key_type& key) {
    size_t index = m_ky(key, m_size);
    assert(index < m_size);
    return index;
  }
private:
  size_t m_size;        //桶列表长度
  Node** m_data;        //桶列表
  size_t m_count = 0;   //数据记录
  size_t m_memory = 0;  //内存消耗
  equal_fun m_ef;       //查找数据比较
  compare_fun m_cf;     //排序比较
  hash_fun m_ky;        //哈希函数
};
#endif