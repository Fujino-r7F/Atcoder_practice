#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int gcd(int a, int b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

int main() {
    int k;
    cin >> k;
    int sum=0;
    for(int a=1;a<k+1;++a){
        for(int b=1;b<k+1;++b){
            for(int c=1;c<k+1;++c){
                sum += gcd(gcd(a,b),c);
            }
        }
    }
    cout << sum << endl;
}