#include <iostream>
#include<string>
using namespace std;
 
int main(){
    int N;
    int A[210];
    cin >> N;
    for (int i=0; i<N;++i)cin >> A[i];
 
    int counter =0;
    while(true){
        bool exist_odd = false;
        for (int i=0;i<N;++i){
            if(A[i]%2 != 0)exist_odd = true;
        }
        if (exist_odd) break;
 
        for (int i = 0; i < N; ++i) {
            A[i] /= 2;
        }
        ++counter;
    }
 
    cout << counter << endl;
    
}