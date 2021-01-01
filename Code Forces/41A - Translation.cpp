// https://codeforces.com/contest/41/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
  string t,s,status;
  cin>>t>>s;
  if (t.length() == s.length()) {
    for (int i=0; i<t.length(); i++) {
      if (t[i] == s[t.length()-1-i]) {
        status = "YES";
      } else {
        status = "NO";
        break;
      }
    }
  }else {
    status = "NO";
  }
  cout<<status<<endl;
  return 0;
}