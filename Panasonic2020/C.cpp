#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    long double a,b,c;
    cin >> a >> b >> c;
    long double sqrtA = sqrtl(a);
    long double sqrtB = sqrtl(b);
    long double sqrtC = sqrtl(c);
    if(sqrtA + sqrtB < sqrtC){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}