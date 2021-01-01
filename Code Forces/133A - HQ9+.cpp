// https://codeforces.com/contest/133/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
  string p,status;
  cin>>p;
  for (int i=0; i<p.length(); i++) {
    if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
      status = "YES";
      break;
    } else {
      status = "NO";
    }
  }
  cout<<status<<endl;
  return 0;
}