#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int n,m,a; cin>>n>>m;
    if(n>=m){
        
        a= (n+1)/2;
        while(a%m!=0 and a<n) a++;
        // cout<<a;
    }
    else a=-1;
    cout<<a;


}
