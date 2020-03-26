#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,y;
    cin >> n;
    cin >> y;
    int ans10000=-1,ans5000=-1,ans1000=-1;
    for(int i=0;i<=n;++i){
        for(int j=0;j+i<=n;++j){
            int k = n - i - j;
            int sum = 10000*i + 5000*j + 1000*k;
            if(sum == y){
                ans10000 = i;
                ans5000 = j;
                ans1000 = k;
            }
        }
    }
    cout << ans10000 << " " << ans5000 << " " << ans1000 << endl;
    return 0;
}