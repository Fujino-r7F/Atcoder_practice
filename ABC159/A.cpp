#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    int sum = 0;
    for(int i=1;i<N;++i){
        sum = sum + i;
    }
    for(int j=1;j<M;++j){
        sum = sum + j;
    }
    cout << sum << endl;
    return 0;
}