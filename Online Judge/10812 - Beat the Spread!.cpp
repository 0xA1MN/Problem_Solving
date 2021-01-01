// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1753
#include <bits/stdc++.h>
using namespace std;
int main() {
  int t,s,d,a,b;
  cin>>t;
  while (t--) {
    cout<<t<<endl;
		cin>>s>>d;
		a = s + d;
		b = s - d;
  	if (a < 0 || a&1 || b < 0 || b&1)
    // a&1 (or, rather a & 1) checks the LSB of a to be SET or not.
			printf("impossible\n");
		else
			printf("%d %d\n", a/2, b/2);
  }
  return 0;
}