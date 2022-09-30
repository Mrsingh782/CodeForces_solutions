#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<long long> a(n,0); for(long long i=0;i<n;i++) cin>>a[i];
#define fout(a) for(long long i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    long long t; cin>>t; while(t--){
        long long n; cin>>n; string s; cin>>s; 
        vector<long long> a(n,1);
        long long ans=0;
        for(long long i=0; i<n; i++){
            if(s[i]=='0'){
                long long k=i+1;
                
                for(long long j=i; j<n; j+=k){
                    if(s[j]=='1') break;
                    if(a[j]){
                        a[j]=0;
                        ans+=k;
                    }

                
                }
            }
        }
        cout<<ans<<endl;
    }


}