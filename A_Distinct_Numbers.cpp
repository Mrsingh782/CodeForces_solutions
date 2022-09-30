#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a[t];
    for(int i=0; i<t; i++) cin>>a[i];
    sort(a,a+t);

    int ans=1; 
    for(int i=1; i<t; i++) if(a[i]!= a[i-1]) ans++;
    cout<<ans;
}