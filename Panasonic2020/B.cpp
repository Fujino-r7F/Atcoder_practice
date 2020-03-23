#include <iostream>
#include <string>
using namespace std;

int main(){
    int H,W;
    cin >> H >> W;
    int a[H][W] = {{0}};
    int b[H][W] = {{0}}
    int counter = 0;
    int nowh = 1:
    int noww = 1;
    a[0][0] = 1
    
    while(){
        if(b[nowh][noww] != 1){
            for(int i=1;i<=H;i++){
                for(int j=1;j<W;j++){
                    if (nowh + noww == i + j && nowh - noww != i - j){
                        a[i-1][j-1] = 1;
                    }else if(nowh + noww != i + j && nowh - noww == i - j){
                        a[i-1][j-1] = 1;
                    }
                }
            }
            b[nowh][noww];
            for(int k=0;k<) 
        }
    }
}