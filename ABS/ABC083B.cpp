#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,a,b,sum=0;
    cin >> n >> a >> b;
    rep(i,n+1){
        string s = to_string(i);
        int temp = 0;
        for(int i=0;i<s.size();++i){
            temp += s[i] - '0';
        }
        if(temp >= a && temp <= b){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}