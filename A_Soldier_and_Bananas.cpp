#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<" ";
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int r= (k*(w*(w+1)/2));
    if(r-n >0 )cout<<r-n;
    else cout<<0;


}