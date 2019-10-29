#include <iostream>

static int f0 = 0;
static int f1 = 1;
static int m;
using namespace std;
int fib() {
    f1=f0+f1;
    f0=f1-f0;
    return f0;
}
int R() {
    return fib()%m;
}
int main()
{
  int l;
  cin >> m >>l;
  for(int i=1;i<=l;i++) {

    cout << R() << ' ';
  }
}
