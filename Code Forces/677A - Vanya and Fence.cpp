// https://codeforces.com/contest/677/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,fenceH,width=0,temp=0;
  cin>>n>>fenceH;
  if (1<=n && n<=1000 && 1<=fenceH && fenceH<=1000) {
    for (int i=0; i<n; i++) {
      cin>>width;
      if (width > fenceH) {
        temp = temp + 2;
      } else {
        temp = temp + 1;
      }
    }
    cout<<temp<<endl;
  } else {
    return 0;
  }
}
/*
2 friend h < f_h

3 7 >> n : no of person & h : fence height 
4 5 14 >> each person height


only person number 3 must bend down,
so the required width is equal to 1 + 1 + 2 = 4.

*/