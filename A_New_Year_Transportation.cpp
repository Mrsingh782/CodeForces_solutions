#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<" ";
int main(){
    int n,m; cin>>n>>m;
    vector<int> a(n+1,0); for(int i=1; i<=n; i++) cin>>a[i];
    fout(a);
    cout<<endl;
    vector<bool> b(n+1,false);
    // memset(b, false, sizeof(b));
    int i=1;
    b[1]=true;
    while(i <n){
        b[a[i]+i]= true;
        i= a[i]+i;
    }
    // if(b[m]) cout<<"YES";
    // else cout<<"NO";

    for(int i=0; i<b.size(); i++)  cout<<b[i]<<" ";
    cout<<endl;



}