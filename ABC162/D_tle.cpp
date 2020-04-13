#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int main() {
  int N;
  string s;
  cin >> N;
  cin >> s;
  long long c=0;
  for(int i=0;i<N-2;++i){
      for(int j=i+1;j<N-1;++j){
          if(s[i] != s[j]){
            for(int k=j+1;k<N;++k){
                if(s[i] != s[j] && s[i] != s[k] && s[j] != s[k] && j-i != k-j){
                    c++;
                }
            }
          }
      }
  }
  cout << c << endl;
}