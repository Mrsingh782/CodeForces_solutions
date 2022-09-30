#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t; while(t--){
        int n; cin>>n; char a[n]; char b[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        bool flag=false;
        for(int i=0; i<n; i++){
            if(a[i]!= b[i]){
                if(!((a[i]=='G' and b[i]=='B') or (a[i]=='B' and b[i]=='G'))) {cout<<"NO"<<endl;flag=true; break;}
            }
        }
        if(!flag) cout<<"YES"<<endl;
    }
}   