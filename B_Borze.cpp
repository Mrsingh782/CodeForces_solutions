#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans;

    for(int i=0;i< s.length(); i++){
        if(s[i]=='.'){
            ans= ans +'0';
        }
        else if(s[i]=='-'){
            if(s[i+1]=='.'){
                ans= ans +'1';
                i++;
            }
            else if(s[i+1]=='-') {
                ans= ans +'2';
                i++;
            }
            
        }
    }

    for(int i=0; i< ans.length(); i++){
        cout<<ans[i];
    }
}