// https://www.urionlinejudge.com.br/judge/en/problems/view/1007
#include <bits/stdc++.h>
using namespace std;
int main() {
  int hour,min,sec;
  cin>>sec;
  hour = sec/3600;
  min = (sec%3600)/60;
  sec = ((sec%3600)%60);
  cout<<hour<<":"<<min<<":"<<sec<<endl;
}