// https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  string num[10] = {"","one","two","three","four","five","six","seven","eight","nine"};
  cin>>n;
  if (1<= n && n <= 9) {
    cout<<num[n]<<endl;
  } else {
   cout<<"Greater than 9"<<endl; 
  }
  return 0;
}
