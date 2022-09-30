#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t; int a[t];
    int l=0,h=0;
    for(int i=0; i<t; i++) {
        cin>>a[i];
        if(a[i]> a[h]) h=i;
        if(a[i]<= a[l]) l=i;

    }

    int ans=0;
    ans= (h>l)? (h+ (t-l-2)): (h+ (t-l-1));
    // while(a[0]!= a[h]){
    //     ans++;
    //     if((h-1)!= l) swap(a[h], a[h-1]), h--;
    //     else swap(a[h], a[h-1]), l++, h--;
    // }
    // while(a[t-1]!= a[l]){
    //     ans++;
    //     if((l+1)!=h) swap(a[l], a[l+1]), l++;
    //     else swap(a[l], a[l+1]), l++, h--;
    // }

    
    // cout<<endl;
    // cout<<l<<" "<<h<<endl; 

    


    cout<<ans;


}