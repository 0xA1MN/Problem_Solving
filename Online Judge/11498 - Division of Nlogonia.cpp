// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=2493&mosmsg=Submission+received+with+ID+25887503
#include <bits/stdc++.h>
using namespace std;
int main() {
  int k,n,m,x,y;
  cin>>k>>x>>y;
  for (int i=0; i<k; i++) {
    cin>>n>>m;
    if ( n == x || m == y) {
      cout<<"divisa"<<endl;
    } else if ( n < x && m > y) {
      cout<<"NO"<<endl;
    } else if ( n > x && m > y) {
      cout<<"NE"<<endl;
    } else if ( n > x && m < y) {
      cout<<"SE"<<endl;
    } else if ( n < x && m < y){
      cout<<"SO"<<endl;
    }
  }
  return 0;
}