#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int main() {
    unsigned long long n=100,x;
    cin >> x;
    unsigned long long c =0;
    while(true){
        n = n + n*0.01;
        c++;
        if(n>=x){
            cout << c << endl;
            return 0;
        }
    }
}