#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s; int n=s.length();
    char a[105];
    int t=0;

    for(int i=0; i<n; i++){
        if(s[i]!= '+') a[t++]=s[i];
        
    }
    
    sort(a, a+t);
    
    for(int i=0; i<t; i++){
    
        if(i== t-1) cout<<a[i]<<endl;
        else cout<<a[i]<<"+";
    }

    
    

}