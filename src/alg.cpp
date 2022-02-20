// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
for(int i = 2; i < value; i++) {
if(value % i == 0) {
return false;
} else {
return true;
}
return true;
}

uint64_t nPrime(uint64_t n) {
long chicha = 1;
int id = 1;
while(id != n) {
chicha++;
if(checkPrime(chicha)) {
id++;
}
}
return chicha;
}

uint64_t nextPrime(uint64_t value) {
uint64_t i = 1;
uint64_t blizko;
bool ex = false;
while(ex == false) {
if(checkPrime(blizko+i)) {ex = true; blizko = value+i;}
if(checkPrime(blizko-i)) {ex = true; blizko = value-i;}
i++;
}
return blizko;
}

uint64_t sumPrime(uint64_t hbound) {
uint64_t i = 2;
uint64_t sum = 0;
while(i < hbound) {
if(checkPrime(i)) {sum = sum+i;}
i++;
}
return sum;
}
