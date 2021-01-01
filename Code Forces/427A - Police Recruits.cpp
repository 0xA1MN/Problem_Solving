// https://codeforces.com/contest/427/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
  int event,temp=0,crime=0,cop=0;
  cin>>event;
  for (int i=0; i<event; i++) {
    cin>>temp;
    if (temp == -1) {
      if (cop == 0) {
        crime += 1;
      } else {
        cop += -1;
      }
    } else {
      cop += temp;
    }
  }
  cout<<crime<<endl;
  return 0;
}