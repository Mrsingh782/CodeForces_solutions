#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int m;cin>>m;
    vector<int> a(n);
    int k = 0;
            

    for(int i=0; i< n; i++){
        cin>>a[i];
        if(a[i]%m==0) a[i]/=m;
        else {a[i]/=m;a[i]++;}
    }

    for(int i=0; i<n; i++){
        if(a[i]>=a[k]){
            k = i;
        }

    }

    cout<<k+1;
    



    




}