// https://www.urionlinejudge.com.br/judge/en/problems/view/1185
#include <bits/stdc++.h>
using namespace std;
int main() {
  char indicator;
  double M[12][12], sum=0;
  cin>>indicator;
  for (int r=0; r<12; r++) {
    for (int c=0; c<12; c++) {
      cin>>M[r][c];
    }
  }
  for (int i=0; i<12; i++) {
    for (int j=0; j<12; j++) {
      if (i+j < 11) {
        sum += M[i][j];
      }
    }
  }
  if (indicator == 'S') {
    cout<<sum<<fixed<<setprecision(1)<<endl;
  } else if (indicator == 'M') {
    cout<<sum/66<<fixed<<setprecision(1)<<endl;
  }
  return 0;
}