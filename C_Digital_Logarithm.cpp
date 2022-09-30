#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int len(int n){
    string s= to_string(n);
    int ans=0;
    
    bool flag=false;
    for( int i=s.size()-1; i>=0; i--){
        if(s[i]!= '0') {flag=true; ans++;}
        else if(s[i]=='0' and flag) ans++;
        
    }
    return ans;


}
int main(){
    int t; cin>>t; while(t--){
        int n; cin>>n; 
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin>>a[i]; 
        for (int i = 0; i < n; i++)cin>>b[i]; 
        int temp=0;
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i = 0; i < n; i++) {
        if(a[i]!=b[i]){
            if(a[i]!=1) temp+= len(a[i]);
            }
            if(b[i]!=1) temp+= len(b[i]);

        
        }
        
        cout<<temp<<endl;
        
        
        
        
    }


}