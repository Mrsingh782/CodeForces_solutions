#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    long long n; cin>>n;
    long long  t=0, ans=0;
    long long i=1;long long k=0;
    while(ans<=n){
        t+= i;
        i++;
        ans+= t;
        k++;
    }
    // cout<<ans;
    cout<<(k-1);


}