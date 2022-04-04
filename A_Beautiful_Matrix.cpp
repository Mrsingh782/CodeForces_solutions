#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5][5]={0};
    int tx,ty;
    for(int i=0; i<5;i++){
        for(int j=0; j<5; j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                tx=i;
                ty=j;
            }
        }
    }
    
    cout<< abs(tx-2)+ abs(ty-2);
    
    return 0;
}   