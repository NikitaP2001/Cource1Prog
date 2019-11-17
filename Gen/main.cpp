#include <iostream>
using namespace std;
#include "lengthm.h"
#include "htmloutput.h"

int main()
{
  int m;
  cin >> m;
  tablebeg();
  for (int i=1;i<=m; i++) {
  cout << "<tr><td>" << i << "</td><td>" << psrncyslelength(i) << "</td></tr>\n";
  }
  tableend();
}
