// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
for(int i = value; i > 1; i--) {
if((value % i == 0)and(i != value))
{return false;
} else
{return true;
}
}
return false;
}

uint64_t nPrime(uint64_t n) {
uint64_t chicha = 1;
uint64_t id = 1;
while(id != n) {
chicha++;
if(checkPrime(chicha) == true) {
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
if(checkPrime(blizko+i) == true) {ex = true; blizko = value+i;}
if(checkPrime(blizko-i) == true) {ex = true; blizko = value-i;}
i++;
}
return blizko;
}

uint64_t sumPrime(uint64_t hbound) {
uint64_t i = 2;
uint64_t sum = 0;
while(i < hbound) {
if(checkPrime(i) == true) {sum = sum+i;}
i++;
}
return sum;
}
