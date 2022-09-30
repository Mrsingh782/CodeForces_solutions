#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int n; cin>>n; 
    if( (n<7 && n!=4) or n==9 or n==10 or n==13) {cout<<-1<<endl; return 0;}
    while(n%7>0) {cout<<4; n-=4;}
    while(n>0) {cout<<7; n-=7;}




}