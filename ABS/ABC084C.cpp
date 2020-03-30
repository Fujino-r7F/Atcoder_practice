#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main(){
    string s;
    cin >> s;

    reverse(s.begin(), s.end());
    rep(i,4) reverse(divide[i].begin(),divide[i].end());

    bool ans = true;
    for(int i=0;i<s.size();){
        bool check = false;
        for(int j=0;j<4;++j){
            string t = divide[j];
            if(s.substr(i,t.size()) == t){
                check = true;
                i += t.size();
            }
        }
        if(!check){
            ans = false;
            break;
        }
    }

    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}