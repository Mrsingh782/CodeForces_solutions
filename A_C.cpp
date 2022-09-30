#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int t; cin>>t; while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int ans=0;
        while(!(a>n or b>n)){
            ans++;
            if(a<b) a+=b;
            else b+=a;
            
        }
        cout<<ans<<endl;

    }


}