#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int t;cin>>t; while(t--){
        int n; cin>>n; cout<<2<<endl;

        int a=n; int b=n-1;
        
        for(int i=1; i<n; i++){
            cout<<a<<" "<<b<<endl;
            a=(a+b+1)/2; b--;
        }

    }


}