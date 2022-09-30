#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int a,b;
    cin>>a>>b;
    int ans=0;
    
    while(a-b<=0){
        a*=3;
        b*=2;
        ans++;
    }

    cout<<ans;


}