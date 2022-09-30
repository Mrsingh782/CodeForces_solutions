#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int n; cin>>n; 
    int a[2*n+1][2*n+1];
    for(int i=0; i<2*n+1; i++){
        int j=n; 
        if(i!=j) a[i][j]=(j<n)? j%n: j-(j%n);
        else a[i][j]= n;
        cout<<a[i][j]<<endl;
    }




}