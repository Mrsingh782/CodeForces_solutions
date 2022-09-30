#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);

    int m;
    cin>>m;
    int b[m];
    for(int i=0; i<m; i++) cin>>b[i];
    sort(b, b+m);

    int i=0,j=0;
    int ans=0;
    while(i<=n-1 and j<=m-1){
        int t= b[j]-a[i];
        if(t==1 or t== -1 or t==0) ans++, i++, j++;
        else if(b[j]>a[i]) i++;
        else j++;
    }
    cout<<ans;

}