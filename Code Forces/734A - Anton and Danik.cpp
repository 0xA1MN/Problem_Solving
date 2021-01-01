// https://codeforces.com/contest/734/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
  int play,antonW=0,danikW=0;
  string temp;
  cin>>play>>temp;
  for (int i=0; i<play; i++) {
    if (temp[i] == 'A') {
      antonW += 1;
    } else if (temp[i] == 'D') {
      danikW += 1;
    }
  }
  if (antonW > danikW) {
    cout<<"Anton"<<endl;
  } else if (antonW < danikW){
    cout<<"Danik"<<endl;
  } else {
    cout<<"Friendship"<<endl;
  }
  return 0;
}