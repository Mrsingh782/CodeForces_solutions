#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t; while(t--){
        int n; cin>>n; 
        string s; cin>>s;
        if(n!=5) cout<<"NO"<<endl;
        else {
            set<char> us;
            for(int i=0; i<5; i++){
                if(s[i]=='T' or s[i]=='i' or s[i]=='m' or s[i]=='u' or s[i]=='r') us.insert(s[i]);
                
            }
            if(us.size() != 5) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;

        }

    }
}