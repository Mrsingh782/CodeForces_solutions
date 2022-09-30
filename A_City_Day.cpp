#include <bits/stdc++.h>
using namespace std;

#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<" ";
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> a(n);
    
    
    int b=0;
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    for(int i=0; i<n; i++) {
        if(a[i]<a[b]) b=i;
        if(i-b>=y) break;  
    }
    cout<<b+1;







}