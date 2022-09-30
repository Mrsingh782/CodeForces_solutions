#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int n; cin>>n; string s; cin>>s;
    for(int i=1; i<n;i++) if(s[i]!= s[0]){ cout<<"YES\n"<<s[0]<<s[i]; return 0;}
    cout<<"NO";



}