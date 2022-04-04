#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;

    int a[n][3]={0};
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>a[i][j];
        }
    }
    int sx,sy,sz;
    sx=sy=sz=0;
    for(int i=0; i<n; i++){
        sx+= a[i][0];
        sy+= a[i][1];
        sz+= a[i][2];
    }

    if(sx==0 && sy==0 && sz==0) cout<<"YES";
    else cout<<"NO";

    return 0;

}