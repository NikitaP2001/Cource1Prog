#ifndef R_H_INCLUDED
#define R_H_INCLUDED
#include "fib.h"

int m;

int R() {
    return fib()%m;
}

void resetrm(int m1) {
  resetFib();
  m=m1;
}

#endif // R_H_INCLUDED
