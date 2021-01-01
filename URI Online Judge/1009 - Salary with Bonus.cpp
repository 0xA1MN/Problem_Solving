// https://www.urionlinejudge.com.b
#include <bits/stdc++.h>
using namespace std;
int main() {
  string name ;
  double salary , sales ;
  cin >> name >> salary >> sales ;
  double z = ((sales * 0.15))+ salary ;
  cout << "TOTAL = R$ "<< fixed << setprecision(2)<< z << endl;
  return 0;
}
