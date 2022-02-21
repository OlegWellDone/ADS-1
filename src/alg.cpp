// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"



bool checkPrime(uint64_t value) {
for(uint64_t i = 2; i < sqrt(value); i++) {
  if (value % i == 0) {
    return false;
  }
}
return true;
}

uint64_t nPrime(uint64_t n) {
uint64_t chicha = 1;
uint64_t id = 0;
while(id <= n) {
chicha++;
if (checkPrime(chicha)) {
id++;
}
}
return chicha;
}

uint64_t nextPrime(uint64_t value) {
uint64_t blizko;
uint64_t i;
while(i < value) {
if (checkPrime(value + i)) {
  blizko = value + i;
  break;
}
}
  return blizko;
}

uint64_t sumPrime(uint64_t hbound) {
uint64_t sum = 0;
  uint64_t i = 1;
  while(i < hbound){
    if (checkPrime(i)) {
      sum = sum + i;
    }
    i = i + 1;
  }
  return sum;
}
