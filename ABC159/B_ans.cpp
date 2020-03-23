#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
bool isPalindrome(string s) {
  string t = s;
  reverse(t.begin(), t.end());
  return s == t;
}
 
int main() {
  string s;
  cin >> s;
  bool ans = true;
  if (!isPalindrome(s)) ans = false;
  if (!isPalindrome(s.substr(0, s.size()/2))) ans = false;
  //condition ? result_if_true : result_if_false
  cout << (ans ? "Yes" : "No") << endl;
  return 0;
}