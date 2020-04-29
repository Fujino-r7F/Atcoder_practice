#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int main() {
    int n;
    cin >> n;
    set<string>st;
    string temp;
    for(int i=0;i<n;++i){
        cin >> temp;
        st.insert(temp);
    }
    cout << st.size() << endl;
}