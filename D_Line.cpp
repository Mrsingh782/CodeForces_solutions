#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t; 
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> a;
        int p=0, q=n-1;
        for(int i=0; i<n; i++){
            
            while(p < (n/2)){
                if(s[p]=='L') {break;}
                p++;
            } 
            while(q> (n/2)){
                if(s[q]=='R') {break;}
                q--;
            } 

            if( (p)> (n-1-q) ) s[q]='L';
            else s[p]='R';
            // for(int i=0; i<n; i++) cout<<s[i];
            // cout<<endl;
            int sum=0; 
            for(int j=0; j<n; j++){
                if(s[j]=='L') sum+= j;
                else sum+= (n-1)-j;
            }
            a.push_back(sum);
        }
        for(auto it: a){
            cout<<it<<" "; 
        }
        cout<<endl;

    }

}