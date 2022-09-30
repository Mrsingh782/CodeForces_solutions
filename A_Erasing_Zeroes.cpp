#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int t; cin>>t; while(t--){
        string s;
        cin>>s;
        int fi=-1, li=-1;
        for(int i=0; i<s.size(); i++){
            if(s[i]-'0' ==1) {
                if(fi==-1) fi=i;
                li=i;
            }
        }
        int ans=0;
        for(int i=fi; i<li; i++){
            if(s[i]-'0'==0) ans++;
        }
        cout<<ans<<endl;
    }

}