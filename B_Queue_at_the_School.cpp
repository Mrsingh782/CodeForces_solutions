#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t;
    cin>>t;
    string s;
    cin>>s;
    
    int z=1;
    while(z<=t){
        for(int i=0; i < s.length()-1; i++){
            if(s[i]=='B'&& s[i+1]=='G'){
                swap(s[i], s[i+1]);
                i++;
            }
        }
        z++;
    }
    
    for(int i=0; i<s.length(); i++){
        cout<<s[i];
    }
    return 0;
    

}