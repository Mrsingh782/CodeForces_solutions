#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; int x=0; while(n--){
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++){
            if(s[i]!='X'){
                if(s[i]=='+' and s[i+1]=='+') x++, i++;
                else if(s[i]=='-' and s[i+1]=='-') x--, i++;
            }
        }
    }
    cout<<x;
}