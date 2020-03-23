#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    string half = "",half_after = "";
    string half2 = "",half_after2 = "";
    string half3 = "",half_after3 = "";
    string s2 = "";
    for(int i=0;i<S.size()/2;++i){
        half = half +  S[i];
    }
    for(int i=S.size()-1;i>S.size()/2;--i){
        half_after = half_after + S[i];
    }
    
    if(half != half_after || half.size() == 1 || half_after.size() == 1){
        cout << "No" << endl;
        return 0;
    }    
    for(int i=((S.size()+3)/2)-1;i<S.size();++i){
        s2 = s2 + S[i];
    }
    
    for(int i=0;i<half.size()/2;++i){
        half3 = half3 +  S[i];
    }
    for(int i=half.size()-1;i>half.size()/2;--i){
        half_after3 = half_after3 + S[i];
    }
    if(half3 != half_after3 || half3 == "" || half_after3 == ""){
        cout << "No" << endl;
        return 0;
    }
    

    for(int i=0;i<s2.size()/2;++i){
        half2 = half2 +  S[i];
    }
    for(int i=s2.size()-1;i>s2.size()/2;--i){
        half_after2 = half_after2 + S[i];
    }
    if(half2 != half_after2 || half2 == "" || half_after2 == "")cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}