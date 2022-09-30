#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<=3) {cout<<-1; return;}

    vector<int> a(n);
    int z=0;
    int p=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==0) z++;
        else p++;
    }

    



}