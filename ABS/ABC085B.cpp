#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,c=0;
    cin >> n;
    int d[n];
    rep(i,n) cin >> d[i];
    sort(d, d+n, greater<int>());
    int current = 101;
    rep(i,n){
        if(d[i] < current){
            c++;
            current = d[i];
        } 
    }
    cout << c << endl;
    return 0;
}