#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int main() {
    int n,k;
    cin >> n >> k;
    int a[n] = {0};
    int d;
    for(int i=0;i<k;++i){
        cin >> d;
        for(int j=0;j<d;++j){
            int temp;
            cin >> temp;
            a[temp-1] = 1;
        }
    }
    int c=0;
    for(int i=0;i<n;++i){
        if(a[i] == 0){
            c++;
        }
    }
    cout << c << endl;
}