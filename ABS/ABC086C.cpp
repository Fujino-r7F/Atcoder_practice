#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;
    int t[n],x[n],y[n];
    for(int i=0;i<n;++i){
        cin >> t[i] >> x[i] >> y[i];
    }
    bool can = true;
    for(int i=0;i<n;++i){
        if(i==0){
            int s = abs(x[i]) + abs(y[i]);
            if(s%2 != t[i]%2 || s > t[i]){
                can = false;
                break;
            }
        }else{
            int s = abs(x[i]- x[i-1]) + abs(y[i] - y[i-1]);
            if(s%2 != (abs(t[i]-t[i-1]))%2 || s >abs(t[i]-t[i-1])){
                can = false;
                break;
                
            }
        }
    }
    if (can) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    
    return 0;
}