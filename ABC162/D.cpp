#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int main() {
    int n;
    string s;
    cin >> n >> s;
    long long  RC=0,GC=0,BC=0;
    for(int i=0;i<n;++i){
        if(s[i] == 'R')RC++;
        else if(s[i] == 'G')GC++;
        else BC++;
    }
    long long sum = RC * GC * BC;
    for(int i=0;i<n;++i){
        for(int d=0;d<n;++d){
            int j = i + d;
            int k = j + d;
            if(k >= n)break;
            if(s[i] != s[j] && s[j] != s[k] && s[k] != s[i]){
                sum--;
            }
        }
    }
    cout << sum << endl;
}