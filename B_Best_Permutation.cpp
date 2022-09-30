#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int t; cin>>t;while(t--){
        int n; cin>>n; 
        vector<int> a(n);
        a[n-1]=n;
        a[n-2]=n-1;
        a[n-3]=1;
        for(int i=0; i<n-3; i++){
            a[i]=i+2;
        }

        int t=0;
        for(int i=0; i<n-3; i++){
            if(t<a[i]) t+=a[i];
            else t=0;
        }
        // cout<<t;
        // cout<<endl;

        if(t==0){
            reverse(a.begin(), a.begin()+(n-3));
            // for(int i=0; i<a.size(); i++) cout<<a[i]<<" ";
            for(int i=0; i<n-3; i++){
            if(t<a[i]) t+=a[i];
            else t=0;
            
        }
        if(t==0) swap(a[n-4], a[n-5]);
        
        t=0;
        for(int i=0; i<n-3; i++){
            if(t<a[i]) t+=a[i];
            else t=0;
        }
        // cout<<t;
        // cout<<endl;

        
            
        }
        for(int i=0; i<n; i++) cout<<a[i]<<" ";
        cout<<endl;
        

    
    }




}