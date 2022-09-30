#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t; while(t--){
        int n;
        cin>>n;
        string a1[n];
        string a2[n];
        string a3[n];

        for(int i=0; i<n; i++) cin>>a1[i];
        for(int i=0; i<n; i++) cin>>a2[i];
        for(int i=0; i<n; i++) cin>>a3[i];
        
        
        unordered_map<string, int> m;
        for(int i=0; i<n; i++) {
            m[a1[i]]++;
        }
        for(int i=0; i<n; i++) {
            m[a2[i]]++;
        }
        for(int i=0; i<n; i++) {
            m[a3[i]]++;
        }
        
        int sum=0;
        for(int i=0; i<n; i++){
            if(m[a1[i]]==1) sum+=3;
            else if(m[a1[i]]==2) sum+=1;
        }
        cout<<sum<<" ";
        sum=0;

        for(int i=0; i<n; i++){
            if(m[a2[i]]==1) sum+=3;
            else if(m[a2[i]]==2) sum+=1;
        }
        cout<<sum<<" "; sum=0;
        for(int i=0; i<n; i++){
            if(m[a3[i]]==1) sum+=3;
            else if(m[a3[i]]==2) sum+=1;
        }
        cout<<sum<<" "<<endl;
        sum=0;


        
    }
}