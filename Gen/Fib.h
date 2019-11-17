#ifndef FIB_H_INCLUDED
#define FIB_H_INCLUDED
static long long int f0 = 0;
static long long int f1 = 1;
long long int fib() {
    f1=f0+f1;
    f0=f1-f0;
    return f0;
}
void resetFib(){
  f0=0;
  f1=1;
}

#endif // FIB_H_INCLUDED
