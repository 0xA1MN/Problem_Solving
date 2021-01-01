// https://www.urionlinejudge.com.br/judge/en/problems/view/1036
#include <bits/stdc++.h>
using namespace std;
int main() {
  double a, b, c, t;
  cin>>a>>b>>c;
  if (b*b - 4*a*c >= 0 && a != 0 ){
    t = sqrt(b*b - 4*a*c);
    cout<<"R1 = "<<fixed<<setprecision(5)<<(-b+t)/(2*a)<<endl;
    cout<<"R2 = "<<fixed<<setprecision(5)<<(-b-t)/(2*a)<<endl;
  } else {
    cout<<"Impossivel calcular"<<endl;
  }
  return 0;
}