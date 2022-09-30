#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,l;
    cin>>n>>l;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    double temp=-1;
    // cout<<temp<<"tessting"<<endl;
    for(int i=0; i<n-1;i++) if((a[i+1]- a[i])>temp) temp=(a[i+1]- a[i]);
    temp= temp/2;
    temp= max(temp, (double)a[0]);
    temp= max(temp, (double)(l-a[n-1]) );
    // temp=25.6;??
    cout<<fixed<<setprecision(10)<<temp;
    return 0;
}