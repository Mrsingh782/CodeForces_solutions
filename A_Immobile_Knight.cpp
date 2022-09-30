#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int t; cin>>t; while(t--){
        int n,m; cin>>n>>m;
        int cx,cy;
        cx= (n%2==0)? n/2: n/2+1;
        cy= (m%2==0)? m/2: m/2+1;
        if((cx-n) >=2 and (cy-m)>=1) cout<<1<<" "<<1<<endl;
        else if((cx-n) >=1 and (cy-m)>=2) cout<<1<<" "<<1<<endl;
        else cout<<cx<<" "<<cy<<endl;
    }


}