#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int t; cin>>t; while(t--){
        int n; cin>>n; vector<long long > a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        long long ans=INT_MAX; 
        sort(a.begin(), a.end());
        for(int i=1; i<n-1;i++){
            // cout<<"comparing neg"<<i<<" "<<endl;
            // cout<<a[i]-a[i-1]<<"  "<<a[i]-a[i+1]<<endl;
            ans= min(ans, abs(a[i]-a[i-1]) + abs(a[i]-a[i+1]));
        }
        cout<<ans<<endl;
    }


}