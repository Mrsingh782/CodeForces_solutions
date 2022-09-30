#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int t;cin>>t; while(t--){
        string s; cin>>s;
        int ans=0;
        ans += ((s[0]-'0') -1)*10;
        
        int n=s.size();
        if(n==1) ans+=1;
        else if(n==2) ans+=3;
        else if(n==3) ans+=6;
        else ans+= 10;
        cout<<ans<<endl;
    }


}