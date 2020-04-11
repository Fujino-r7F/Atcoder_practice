#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int main() {
    ll n,a,b;
    cin >> n >> a >> b;
    //周期をcとする
    ll c = a+b;
    //はみ出してない部分
    ll ans = a * (n/c);
    //はみ出している部分に青玉がA個あるかどうか
    ans += min(n%c, a);
    cout << ans << endl;
    return 0;
}