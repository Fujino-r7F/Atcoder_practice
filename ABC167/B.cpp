#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int main() {
    int a,b,c,k;
    cin >> a >> b >> c >> k;
    int max = 0;
    for(int i=1;i<=k;++i){
        if(i<=a){
            max++;
        }else if(i<=a+b){

        }else{
            max--;
        }
    }
    cout << max << endl;
}