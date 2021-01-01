// https://codeforces.com/contest/231/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,x,y,z,counter=0;
  cin>>n;
  for (int i=0; i<n; i++) {
    cin>>x>>y>>z;
    if (x==1 && y==1 || x==1 && z==1 ||y==1 && z==1) {counter += 1;}
  }
  cout<<counter<<endl;
  return 0;
}