#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;

        long long ans=0;
        ans= (k/(n-1))*n;
        ans += (k%(n-1) ==0)? -1:k%(n-1) ;

        cout<<ans<<endl;


    }

}