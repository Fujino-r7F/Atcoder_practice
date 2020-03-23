#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int a,b,c,x;
    cin >> a >> b >> c >> x;
    int counter = 0;
    rep(i,a+1){
        rep(j,b+1){
            rep(k,c+1){
                int total = 500*i + 100*j + 50*k;
                if(total == x) {
                    ++counter;
                }
            }
        }
    }

    cout << counter << endl;
    return 0;
}