#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int ans=0;
    while(t--){
        int a,b,c;
        a=b=c=0;
        cin>>a>>b>>c;
        a+=b;
        a+=c;
        if(a>=2) ans++;
    }
    cout<<ans;
    return 0;
}