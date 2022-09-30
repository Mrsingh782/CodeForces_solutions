#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int t; cin>>t; while(t--){
        int n; cin>>n; 
        int m=0; int ti=0;
        int a;
        for(int i=1; i<=n; i++){
            cin>>a;
            if(a>=m) {m=a; ti=i;}

        }
        cout<<ti<<endl;



    }


}