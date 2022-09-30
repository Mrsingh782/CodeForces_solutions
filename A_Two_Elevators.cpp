#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int t; cin>>t; while(t--){
        int a,b,c,d,e;
        e=INT_MAX;
        cin>>a>>b>>c;
        d=abs(a-1);
        if(b>c){
            e=abs(b-1);
        }
        else e=abs(b-c)+ abs(c-1);
        
        if(d>e) cout<<2<<endl;
        else if(d<e) cout<<1<<endl;
        else cout<<3<<endl;
        
    }
    


}