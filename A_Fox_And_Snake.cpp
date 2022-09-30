#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char a[n][m];
    memset(a,'.',sizeof(a));

    for(int i=0; i<n; i=i+2){
        for(int j=0; j<m;j++){
            a[i][j]='#';
        }
    }
    for(int i=1; i<n; i=i+4){
        a[i][m-1]='#';
    }
    for(int i=3; i<n; i=i+4){
        a[i][0]='#';
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            
            cout<<a[i][j];
        }
        cout<<endl;
    }


}