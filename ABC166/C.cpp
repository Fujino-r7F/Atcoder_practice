#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int main() {
    int n,m,a,b;
    cin >> n >> m;
    int h[n] = {0};
    int f[n] = {0};
    for(int i=0;i<n;++i){
        cin >> h[i];
    }
    for(int i=0;i<m;++i){
        cin >> a >> b;
        if(h[a-1] > h[b-1]){
            f[b-1]=1;
        }else if(h[a-1] < h[b-1]){
            f[a-1]=1;
        }else{
            f[a-1]=1;
            f[b-1]=1;
        }
    }
    int c=0;
    for(int i=0;i<n;++i){
        if(f[i] == 0){
            c++;
        }
    }
    cout << c << endl;
}