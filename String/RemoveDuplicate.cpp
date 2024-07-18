#include<bits/stdc++.h>
 
using namespace std;
 
string removeDuplicateLetters(string s) {
  string ans = "";
  for (int i = 0; i < s.length(); i++) {
    int j = 0;
    for (j = 0; j < i; j++) {
      if (s[i] == s[j]) //same character found
      {
        break;
      }
    }
    if (i == j) {
      ans += s[i];
    }
  }
  return ans;
}
int main() {
  string str = "cbacdcbc";
  cout<<"Original String: "<<str<<endl;
  cout <<"After removing duplicates: " <<removeDuplicateLetters(str) << endl;
  return 0;
}