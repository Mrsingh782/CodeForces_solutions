#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int r;
    while(m--){
        r=n%10;
        if(r!=0) n--;
        else n=n/10;
    }
    cout<<n;
}