#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int main() {
    int a,b;
    cin >> a >> b;
    for(int i=1;i<=10000;++i){
      int x = i * 8/100;
      int y = i * 10/100;
        if(a == x && b == y){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}