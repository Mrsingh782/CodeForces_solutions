#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+= a[i];
    }
    int count=0;
    int m=n+1;
    for(int i=1; i<=5; i++){
        if((sum +i)%m !=1){
            count++;
        }
    }
    cout<<count;



}