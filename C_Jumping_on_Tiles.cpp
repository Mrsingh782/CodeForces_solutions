#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int t; cin>>t; while(t--){
        string s; cin>>s;
        int n=s.size();
        vector<int> p;
        if(s[0]>s[n-1]){
            for(int i=s[0]; i>=s[n-1]; i--){
                for(int j=0; j<n; j++){
                    if(i==s[j]) p.push_back(j+1);
                }
                
            }
        }
        if(s[0]<=s[n-1]){
            for(int i=s[0]; i<=s[n-1]; i++){
                for(int j=0; j<n; j++){
                    if(s[j]==i) p.push_back(j+1);
                }
            }
        }
        cout<<abs(s[0]-s[n-1])<<" "<<p.size()<<endl;
        for(auto it: p)cout<<it<<" ";
        cout<<endl;

    }


}