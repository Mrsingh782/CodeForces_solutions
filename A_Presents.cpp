#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; int a[n];  int d;
    for(int i=0; i<n; i++) {
        cin>>d;
        a[d-1]= i+1;

    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}   