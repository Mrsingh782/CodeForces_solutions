#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int n; cin>>n;
    string s; cin>>s;
    // if(s.size()%n !=0 ) cout<< -1;
    unordered_map<char,int> m;
    for(auto it: s) m[it]++;
    for(auto it: m) if(it.second%n) {cout<<-1; return 0;}

    string ans="";
    // cout<<s<<endl;
    sort(s.begin(), s.end());
    for(int i=0; i<s.size(); i=i+n){
        // cout<<i<<endl;
        ans+=s[i];
    }
    // cout<<n;
    
    while(n--) cout<<ans;
    

}