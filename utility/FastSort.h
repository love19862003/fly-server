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
  size_t operator()(const Key& key, size_t size) const { 
    if(key >= size - 1) { return 0; }
    return size - 1 - key; 
  }
};
template<typename Key>
struct Compare {
  bool operator() (const Key& l, const Key& r) const {
    return l > r;
  }
};
template<typename Data>
struct Equal {
  bool operator()(const Data& l, const Data& r) const {
    return l == r;
  }
};

/*
typedef   unsigned long long pid;
struct SortData {
  pid id;
  unsigned int value;
};

 struct HashSortData {
    size_t operator()(const unsigned int& key, size_t max) const {
      if(key >= max - 1) { return 0; }
      return max - 1 - key;
    }
  };

struct EqualSortData {
  bool operator()(const SortData& l, const SortData& r) const {
    return l.id == r.id;   // ID��Ψһ��ʾ
  }
};
struct CompareSortData {
  bool operator()(const SortData& l, const SortData& r) const {
    return l.value > r.value;   // value ��С�α�������ֵ
  }
};
EFastSort<unsigned int, SortData, HashSortData, EqualSortData, CompareSortData> test(SValueMax);
*/

/*
����˼�롣��������ݽ��зֶΣ�
Ȼ��ÿ���ֶ�ά��һ�����������
���Ϊ��׷��������򡣿��Ը�ÿ����ֵ����һ����Ҫά�����б�
�������Դﵽ����ٶȣ���������¿��԰�freeNode�򿪡�
��Ϊ�κܶ࣬��ô�϶��ֺܶ���ǿյġ��򿪺��ܽ�ʡһ�����ڴ�

Key         �������ֵ��һ��������
Data        ��Ҫ��������ݡ�һ����������ֵ��Ψһ��ʾ��
HashFun     �ֶκ��������ƹ�ϣ�㷨�����Ǳ�֤�������е�˳���ԣ�
EqualFun    ����Ψһ��ʾ�ĺ���
CompareFun  ����ıȽϺ���
*/

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
protected:
  struct Content {
    key_type key;
    value_type  data;
    Content* next;
  };
  struct Node {
    unsigned int count;
    Content* content;
  };
public:
  EFastSort(size_t s, bool freeNode = false) : m_size(s + 1), m_autoFreeNode(freeNode) {
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

  //����µ�����
  void add(const key_type& key,const value_type& v) {
    Content* p = new Content;
    p->data = v;
    p->key = key;
    p->next = nullptr;
    m_memory += sizeof(Content);
    addContent(key, p);
  }

  //��ȡ���а�
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
  //��������
  bool move(const key_type& oldKey, const key_type& newKey, const value_type& data) {
    Node* pOld = getNode(oldKey, false);
    if(nullptr == pOld) { return false; }
    assert(nullptr != pOld);
    Content* current = pOld->content;
    Content* father = nullptr;
    while(nullptr != current) {
      if(m_ef(data, current->data)) {
        if(nullptr != father) { father->next = current->next; }
        else { pOld->content = current->next; }
        --pOld->count;
        if(nullptr == pOld->content && m_autoFreeNode) {
          removeNode(oldKey);
        }
        current->key = newKey;
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

  //�ڴ�
  size_t bytes()const { return m_memory; }
protected:
  //�������ݽڵ�
  void addContent(const key_type& key, Content* p) {
    Node* pNode = getNode(key, true);
    pNode->count++;
    m_count++;
    if(nullptr == pNode->content) {
      pNode->content = p;
      return;
    }
    Content* current = pNode->content;
    Content* father = nullptr;
    while(nullptr != current) {
      if(m_cf(current->key, key)) {
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
  void removeNode(const key_type& key) {
    size_t index = m_ky(key, m_size);
    assert(index < m_size);
    
    if(nullptr == m_data[index]) {
      assert(0 == m_data[index]->count);
      assert(nullptr == m_data[index]->content);
      delete m_data[index];
      m_data[index] = nullptr;
      m_memory += sizeof(Node);
    }
  }
  Node* getNode(const key_type& key, bool create) {
    size_t index = m_ky(key, m_size);
    assert(index < m_size);
    if(create && nullptr == m_data[index]) {
      Node* p = new Node;
      p->content = nullptr;
      p->count = 0;
      m_data[index] = p;
      m_memory += sizeof(Node);
    }
    return m_data[index];
  }
private:
  size_t m_size;        //Ͱ�б���
  bool m_autoFreeNode;  //Ϊ�˽�ʡ�ڴ棬ɾ��û�����ݵĽڵ�
  Node** m_data;        //Ͱ�б�
  size_t m_count = 0;   //���ݼ�¼
  size_t m_memory = 0;  //�ڴ�����
  equal_fun m_ef;       //�������ݱȽ�
  compare_fun m_cf;     //����Ƚ�
  hash_fun m_ky;        //�ֶκ���(������뱣֤�ε�˳����ȷ��)
};
#endif