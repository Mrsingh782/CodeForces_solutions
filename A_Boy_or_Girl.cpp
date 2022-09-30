#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    string s;
    cin>>s;
    vector<int> a(26,-1);
    int c=0;
    // set<char>b;
    // for(int i=0; i<s.size(); i++){
    //     b.insert(s[i]);
    // }
    // c= b.size();
    


    for(int i=0; i<s.size(); i++){
        if(a[s[i] -'a']==-1) {a[s[i]-'a']=0; c++;}
    }

    if(c%2 ==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";



}