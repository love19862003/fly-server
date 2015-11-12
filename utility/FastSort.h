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
    return l.id == r.id;   // ID是唯一标示
  }
};
struct CompareSortData {
  bool operator()(const SortData& l, const SortData& r) const {
    return l.value > r.value;   // value 是小段被排序数值
  }
};
EFastSort<unsigned int, SortData, HashSortData, EqualSortData, CompareSortData> test(SValueMax);
*/

/*
排序思想。先针对数据进行分段，
然后每个分段维护一个有序的链表。
如果为了追求高速排序。可以给每个数值设置一个需要维护的列表。
这样可以达到最大速度，这种情况下可以吧freeNode打开。
因为段很多，那么肯定又很多段是空的。打开后能节省一部分内存

Key         排序的数值，一般是数字
Data        需要保存的数据。一般至少有数值和唯一标示等
HashFun     分段函数（类似哈希算法，但是保证生成序列的顺序性）
EqualFun    查找唯一标示的函数
CompareFun  排序的比较函数
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

  //添加新的数据
  void add(const key_type& key,const value_type& v) {
    Content* p = new Content;
    p->data = v;
    p->key = key;
    p->next = nullptr;
    m_memory += sizeof(Content);
    addContent(key, p);
  }

  //获取排行榜
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
  //更新数据
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

  //内存
  size_t bytes()const { return m_memory; }
protected:
  //增加数据节点
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
  size_t m_size;        //桶列表长度
  bool m_autoFreeNode;  //为了节省内存，删除没有数据的节点
  Node** m_data;        //桶列表
  size_t m_count = 0;   //数据记录
  size_t m_memory = 0;  //内存消耗
  equal_fun m_ef;       //查找数据比较
  compare_fun m_cf;     //排序比较
  hash_fun m_ky;        //分段函数(结果必须保证段的顺序正确性)
};
#endif