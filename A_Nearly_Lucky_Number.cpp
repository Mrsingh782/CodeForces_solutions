#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long c=0;
    for(long long i=0; i<s.size(); i++){
        if(s[i]=='4' or s[i]=='7') c++;
    }
    if(c==4 or c==7) cout<<"YES";
    
    // string a= to_string(c);
    // for(int i=0; i<a.size(); i++){
    //     if(a[i]!= '4' ){
    //         if(a[i]!='7') {cout<<"NO"; return 0;}
    //     }
    // }
    else cout<<"NO";

}