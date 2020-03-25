#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;
    int a[n];
    rep(i,n) cin >> a[i];

    sort(a, a+n, greater<int>());
    int Alice = 0;
    int Bob = 0;
    for(int i=0;i<n;++i){
        if(i % 2 ==0){
            Alice += a[i];
        }else{
            Bob += a[i];
        }
    }
    cout << Alice - Bob << endl;
    return 0;
}