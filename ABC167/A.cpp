#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int main() {
    string s,t;
    cin >> s >> t;
    if(t.substr(0,s.size())==s){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}