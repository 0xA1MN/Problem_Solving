// https://www.urionlinejudge.com.br/judge/en/problems/view/1006
#include <bits/stdc++.h>
using namespace std;
int main() {
  float a,b,c;
  cin>>a>>b>>c;
  a = 0.2*a;
  b = 0.3*b;
  c = 0.5*c;
  cout<<"MEDIA = "<<fixed<<setprecision(1)<<a+b+c<<endl;
}
