// Copyright 2020 Anastasiya Smirnova nastya.asya08@yandex.ru
#include <iostream>

#include "header.hpp"

int main(){
  cache_check a;
  a.countDirect();
  std::cout << a;
  a.countReverse();
  std::cout << a;
  a.countRandom();
  std::cout << a;
  return 0;
}
