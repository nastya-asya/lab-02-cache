// Copyright 2020 Anastasiya Smirnova nastya.asya08@yandex.ru

#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_

#include <ctime>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

const int k = 1024;

class cache_check {
  const std::vector<int> cache_size = {64 * k, 256 * k, 6 * 1024 * k};
  int m;
  std::string travel_variant;
  std::vector<int> size_buf;
  std::vector<double> result_of_experiments;

 public:
  cache_check();
  std::stringstream getExperiment(size_t num_exp) const;
  std::string getTravel() const;
  size_t getCountBuf() const;
  void countDirect();
  void countReverse();
  void countRandom();
  friend std::ostream& operator<<(std::ostream& out, const cache_check& a);
};

#endif  // INCLUDE_HEADER_HPP_
