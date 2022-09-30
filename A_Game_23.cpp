#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    long long n,m; cin>>n>>m;
    if(n==m) {cout<<0<<endl; return 0;}
    if(m<n or m%n) {cout<<-1; return 0;}    
    m= m/n;
    // cout<<m<<endl;
    long long count=0;
    // cout<<m<<endl;
   
    while(m%2 ==0){
        m=m/2;
        count++;
    }
    while(m%3==0){
        m=m/3;
        count++;
    }
    if(m!=1)cout<<-1;
    else cout<<count;
}