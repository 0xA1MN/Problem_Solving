// https://www.urionlinejudge.com.br/judge/en/problems/view/1557
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  if (0<=n && n<= 15) {
    for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
        cout<<pow(2,j)*pow(2,i)<<" ";
      }
      cout<<endl;
    }
    return 0;
  } else {
    return 0;
  }
}