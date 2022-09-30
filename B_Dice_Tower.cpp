#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<long long> a(n,0); for(long long i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    long long  n; cin>>n;
    for(long long i=0; i<n; i++){
        long long m; cin>>m;
        long long x=m/14;
        if(x>=1){
            x= m%14;
            if(x <=6 and x>=1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    return 0;
    
    


}