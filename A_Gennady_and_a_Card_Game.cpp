#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    string s;
    cin>>s;

    string t;
    for(int i=0; i<5; i++){
        cin>>t;
        if(s[0]==t[0] or s[1]==t[1]) {cout<<"YES";return 0;}
    }
    cout<<"NO";
    return 0;
    




}