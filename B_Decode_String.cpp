#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int t; cin>>t; while(t--){
        int n; cin>>n;
        string s; cin>>s;
        string a;
        for(int i=n-1; i>=0; i--){
            if(s[i]=='0'){
                int m= s[i-2]-'0';
                m*=10;
                m+= s[i-1]-'0';
                char x=m+'a'-1;
                a+=x;
                i=i-2;
            }
            else {
                int m=s[i]-'0';
                char x=m+'a'-1;
                a+=x;
            }
            
        }
        reverse(a.begin(), a.end());
        cout<<a;
        cout<<endl;
        

    }

}