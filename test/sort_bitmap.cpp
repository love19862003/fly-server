/********************************************************************

  Filename:   sort_bitmap

  Description:sort_bitmap

  Version:  1.0
  Created:  9:11:2015   17:37
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#include <memory>
#include <bitset>
#include <assert.h>
#include <map>
#include <vector>
#include <boost/timer.hpp>
#include <iostream>
#include <random>
#include <unordered_map>
#include <string.h>
#include <utility/FastSort.h>
#include <functional>
typedef   unsigned long long pid;
static std::random_device gdevice;
static std::mt19937 gen(gdevice());
unsigned int rangeRandom(unsigned int min_num, unsigned int max_num) {
  assert(min_num <= max_num);
  std::uniform_int_distribution<> dist(min_num, max_num);
  return dist(gen);
}

struct TestData {
  pid id;
  unsigned int ov;
  unsigned int nv;
};
typedef   std::multimap<unsigned int, pid> pmap;
typedef   std::map<pid, TestData> smap;
struct SortData {
  pid id;
  unsigned int value;
};

int main(int argc, char* argv[]) { 
  size_t SValueMax = 100;
  size_t SPidCount = 1000;
  size_t SSortCount = 100;
  size_t SRankShow = 100;
  if(argc > 4) { 
    SValueMax = std::stoull(argv[3]); 
    SSortCount = std::stoull(argv[2]);
    SRankShow = std::stoul(argv[4]);
    SPidCount = std::stoull(argv[1]);
  }
 
  std::cout << "record :" << SPidCount << " sort count:" << SSortCount << " Value Range:" << SValueMax << std::endl;
  boost::timer timer;
  pmap test_maps;
  smap sort_maps;

  for(size_t i = 0; i < SSortCount; ++i) {
    pid id = rangeRandom(1, SPidCount);
    unsigned int v = rangeRandom(0, SValueMax-1);
    TestData tt;
    tt.id = id;
    tt.ov = rangeRandom(0, SValueMax - 1);
    tt.nv = v;
    sort_maps[id] = std::move(tt);
  }
  double time = 0.;
  for(size_t i = 0; i < SPidCount; ++i) {
    pid id = i + 1;
    auto it = sort_maps.find(id);
    if (it == sort_maps.end()){
      unsigned int v = rangeRandom(0, SValueMax - 1);
      timer.restart();
      test_maps.insert(std::make_pair(v, id));
      time += timer.elapsed();
    } else {
      timer.restart();
      test_maps.insert(std::make_pair(it->second.ov, it->second.id));
      time += timer.elapsed();
    }  
  }
  std::cout << "add to map using:" << time << " memory:" << test_maps.size() * sizeof(pmap::value_type) << std::endl;

  struct HashSortData {
    size_t operator()(const unsigned int& key, size_t max) const {
      if(key >= max - 1) { return 0; }
      return max - 1 - key;
    }
  };

  struct EqualSortData {
    bool operator()(const SortData& l, const SortData& r) const {
      return l.id == r.id;
    }
  };
  EFastSort<unsigned int, SortData, HashSortData, EqualSortData> test(SValueMax);
 
  double time2 = 0.;
  for(auto& pair : test_maps) {
    timer.restart();
    SortData data;
    data.id = pair.second;
    data.value = pair.first;
    test.add(data.value, data);
    time2 += timer.elapsed();
  }
  std::cout << "add to test using:" << time2 << " memory:" << test.bytes() << std::endl;
  timer.restart();
  for (auto& pair : sort_maps){
    auto range = test_maps.equal_range(pair.second.ov);
    for(auto it = range.first; it != range.second;++it) {
      if (it->second == pair.second.id){
        test_maps.erase(it);
        break;
      }
    }
    test_maps.insert(std::make_pair(pair.second.nv, pair.second.id));
  }
  std::cout <<"map count:" << sort_maps.size() << " using time:" <<  timer.elapsed() << std::endl;

  timer.restart();
  size_t index = 0;
  for(auto& pair : sort_maps) {
    SortData data;
    data.id = pair.second.id;
    data.value = pair.second.nv;
    test.move(pair.second.ov, pair.second.nv, data);
    ++index;
  }
  std::cout << "sort test count:" << sort_maps.size() << " using time:" << timer.elapsed() << std::endl;
  std::vector<SortData> rank;
  rank.reserve(SRankShow);
  test.getRankList(SRankShow, rank);
  for (auto& data : rank){
    std::cout << "pid:" << data.id << " source:" << data.value << std::endl;
  }
  
  return 1;
}
