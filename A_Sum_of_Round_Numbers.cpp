#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t; while(t--){
        
        int n; cin>>n;
        int m=1;
        vector<int> a;  
        while(n){
            int p= n%10;
            // cout<<p<<" "<<m<<endl;;
            if(p!=0) a.push_back(p*m);
            m*=10;
            n=n/10;

        }
        

        cout<<a.size()<<endl;
        for(auto it: a) cout<<it<<" ";
        cout<<endl;
        

    }
}