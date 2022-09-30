#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int t; cin>>t; while(t--){
        long long n,k; cin>>n>>k;
        long long a[n];
        for(long long i=0; i<n; i++){
            cin>>a[i];    
        }

        for(int i=0; i<k; i++){
            int t=-1;
            int j;
            for(j=i; j<n; j=j+k){
                if(t<a[j]) t=a[j];
                
                // t=max(t,a[j]);
            }
            a[j-k]=t;
        }
        // for(int i=0; i<n; i++) cout<<a[i]<<"  ";
        // cout<<endl;
        long long ans=0;
        for(int i=n-1; i>= n-k; i--) ans+= a[i];
        cout<<ans<<endl;




    }


}