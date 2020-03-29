#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    long long int x;
    cin >> x;
    long long int sum = 0;
    long long int  a500 = x /500;
    long long int amari500 = x % 500;
    long long int a5 = amari500 / 5;
    sum += 1000 * a500;
    sum += 5 * a5;
    cout << sum << endl;
    return 0;
}