#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    long long n; cin>>n; 
    long long p,c,t=1,ans=1;
    cin>>p;

    for(long long i=1; i<n; i++){
        cin>>c;
        if(c>p) t++;
        ans=max(ans,t);
        if(c<=p) t=1;
        p=c;
    }

    cout<<ans;


}