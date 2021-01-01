// https://www.urionlinejudge.com.br/judge/en/problems/view/1158
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,x,y,i,j,sum=0;
  cin>>n;
  for(i=1;i<=n;i++){
    cin>>x>>y;
    for(j=x,sum=0;j<x+(y*2);j++){
      if(j%2!=0){
        sum+=j;
      }
    }
  cout<<sum<<endl;
  }
  return 0;
}