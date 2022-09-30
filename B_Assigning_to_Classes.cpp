#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<long long> a(n,0); for(long long i=0;i<n;i++) cin>>a[i];
#define fout(a) for(long long i=0; i<a.size(); i++) cout<<a[i]<<" ";
int main(){
    long long  t;cin>>t; while(t--){
        long long n; cin>>n; 
        focin(a,(2*n));
        sort(a.begin(), a.end());
        cout<<a[n]-a[n-1]<<endl;
    }


}