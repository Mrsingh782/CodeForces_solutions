#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int n; cin>>n;
    string s;
    cin>>s;
    int t=1;
    int i=0;
    
    while(i<n){
        cout<<s[i];
        i+= t;
        t++;
    }
    

    


}