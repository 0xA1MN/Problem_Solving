// https://www.urionlinejudge.com.br/judge/en/problems/view/1101
#include <bits/stdc++.h>
using namespace std;
int main() {
  while (true) {
    int a, b,sum=0,temp;
    cin>>a>>b;
    if (a <= 0 || b <= 0) {
      return 0;
    } else {
      if (b > a) {
        temp = a;
        a = b;
        b = temp;
      }
      for (b; b<=a; b++){
        cout<<b<<" ";
        sum += b;
      }
      cout<<"Sum="<<sum<<endl;
    }
  }
  return 0;
}