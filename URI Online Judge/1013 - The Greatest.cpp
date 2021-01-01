// https://www.urionlinejudge.com.br/judge/en/problems/view/1013
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,c,d,majorAB;
  cin>>a>>b>>c;
  majorAB = ((a+b)+abs(a-b))/2;
  majorAB = ((majorAB+c)+abs(majorAB-c))/2;
  cout<<majorAB<<" eh o maior"<<endl;
  return 0;
}