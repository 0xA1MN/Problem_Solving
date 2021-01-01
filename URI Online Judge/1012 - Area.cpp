// https://www.urionlinejudge.com.br/judge/en/problems/view/1012
#include <bits/stdc++.h>
using namespace std;
int main() {
  float a,b,c;
  cin>>a>>b>>c;
  cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<(a/2)*c<<endl;
  cout<<fixed<<setprecision(3)<<"CIRCULO: "<<3.14159*c*c<<endl;
  cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<((a+b)/2)*c<<endl;
  cout<<fixed<<setprecision(3)<<"QUADRADO: "<<b*b<<endl;
  cout<<fixed<<setprecision(3)<<"RETANGULO: "<<a*b<<endl;
}