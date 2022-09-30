#include <bits/stdc++.h>
using namespace std;

int main(){
    long int n; 
    cin>>n;
    long int a[n];

    for(long int i=0; i<n; i++){
        cin>>a[i];
    }

    long int temp= INT_MAX;
    long int indx=0;
    long int repeat;

    for(long int i=0; i<n; i++){
        if(temp > a[i]){
            temp = a[i];
            indx = i+1;
        }
        else if(temp == a[i]){
            repeat = a[i];
        }

        
    }

    if(temp == repeat ){
        cout<<"Still Rozdil";
    }
    else cout<< indx;
}