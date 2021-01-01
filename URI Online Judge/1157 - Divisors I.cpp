// https://www.urionlinejudge.com.br/judge/en/problems/view/1157
#include <bits/stdc++.h>
using namespace std;
int main() {
  int num;
  cin>>num;
  for (int i=1; i<=num; i++) {
    if (num%i == 0) {
      cout<<i<<endl;
    }
  }
  return 0;
}