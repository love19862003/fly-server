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
template<typename Key>
struct Hash {
  size_t operator()(const Key& key) const { return static_cast<size_t>(key); }
};
template<typename Data>
struct Compare {
  bool operator() (const Data& l, const Data& r) const{
    return l > r;
  }
};
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
  EFastSort(size_t s) : m_size(s) {
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
    }
    free(m_data);
  }

  void add(const key_type& key,const value_type& v) {
    Content* p = new Content;
    p->data = v;
    p->next = nullptr;
    addContent(key, p);
  }

  int rank(const key_type& key, const value_type& data) {
    unsigned int  rank = 0;
    for(size_t i = getKeyIndex(key) + 1; i < m_size; ++i) {
      Node* n = getNode(i);
      if(n) { rank += n->count; }
    }
    Node* node = getNode(key);
    if(nullptr == node) { return -1; }
    Content* current = node->content;
    while(nullptr != current) {
      ++rank;
      if(m_ef(data, current->data)) { return rank; }
      current = current->next;
    }
    return -1;
  }

  bool getRankList(unsigned int count, std::vector<value_type>& rank) const {
    size_t index = m_size - 1;
    while(count > 0) {
      const Node* pNode = getNode(index);
      if(nullptr == pNode) { continue; }

      size_t size = pNode->count;
      if(pNode->count >= count) {
        size = count;
        count = 0;
      } else {
        count -= pNode->count;
      }
      Content* current = pNode->content;
      while(current && size > 0) {
        rank.push_back(current->data);
        current = current->next;
        --size;
      }

      if(index == 0 || count == 0) {
        break;
      }
      --index;
    }
    return true;
  }
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

        if(nullptr == pOld->content) {
          removeNode(oldKey);
        }
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
    Content* current = pNode->content;
    Content* father = nullptr;
    while(nullptr != current) {
      if (m_cf(current->data, p->data)){  //排序
        if(father) { father->next = p; p->next = current; }
        else { pNode->content = p; p->next = current; }
        break;
      } else {
        father = current;
        current = father->next;
      }
    }
  }
  Node* checkNode(const key_type& key) {
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
  void removeNode(const key_type& key) {
    size_t index = getKeyIndex(key);
    if(m_data[index]) {
      delete m_data[index];
      m_data[index] = nullptr;
      m_memory -= sizeof(Node);
    }
  }
  Node* getNode(const key_type& key) { 
    return  m_data[getKeyIndex(key)];
  }
  const Node* getNode(const key_type& key) const {
    return  m_data[getKeyIndex(key)];
  }
  size_t getKeyIndex(const key_type& key) {
    size_t index = m_ky(key);
    assert(index < m_size);
    return index;
  }

  size_t getKeyIndex(const key_type& key) const {
    size_t index = m_ky(key);
    assert(index < m_size);
    return index;
  }
private:
  size_t m_size;        //桶大小
  Node** m_data;        //桶列表
  size_t m_count = 0;   //数据记录
  size_t m_memory = 0;  //内存消耗
  equal_fun m_ef;       //查找数据比较
  compare_fun m_cf;     //排序比较
  hash_fun m_ky;        //哈希函数
};
#endif