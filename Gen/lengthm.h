#ifndef LENGTHM_H_INCLUDED
#define LENGTHM_H_INCLUDED
#include "R.h"


int psrncyslelength(int m1) {
    int L = 0;
    int prevnum = 1;
    int nextnum = 1;
    resetrm(m1);
      while (not (prevnum  + nextnum ==1)) {
        L++;
        if (L % 2 == 1) { prevnum  = R(); }
        if (L % 2 == 0) { nextnum = R(); }
      }
    return(L);

}

#endif // LENGTHM_H_INCLUDED
