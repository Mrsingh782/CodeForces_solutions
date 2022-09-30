#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp=0; int ans=0; 
    int n; cin>>n;
    int a,b;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        temp+= (b-a);
        ans=(temp>ans)? temp:ans;
    }
    cout<<ans;
}   