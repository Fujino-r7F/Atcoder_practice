#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    double m,sum=0;
    cin >> n;
    cin >> m;
    int count = 0;
    int a[n];
    bool can = false;
    rep(i,n){
        cin >> a[i];
        sum += a[i];
    }
    rep(i,n){
        if(a[i] >= sum / (4 * m))count++;
        if(count == m){
            can = true;
            break;
        }
    }
    if(can){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}