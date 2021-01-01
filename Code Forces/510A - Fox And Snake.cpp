// https://codeforces.com/contest/510/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,c;
  cin>>n>>c; //n rows, c column
  for (int i=1; i<=n; i++) {
    if (i%2 == 1) {
      for (int j=0; j<c; j++) {cout<<'#';}
      cout<<endl;
    }
    if (i%4 == 2) {
      for (int k=1; k<c; k++) {cout<<'.';}
      cout<<'#'<<endl;
    }
    if (i%4 == 0) {
      cout<<'#';
      for (int l=1; l<c; l++) {cout<<'.';}
      cout<<endl;
    }
  }
  return 0;
}
