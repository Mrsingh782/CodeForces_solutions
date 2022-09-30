#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int t; cin>>t; while(t--){
        long long n; cin>>n;
        vector<long long> a(n);
        long long b;
        for(long long i=0; i<n; i++) cin>>a[i];
        for(long long i=0; i<n; i++) {cin>>b; a[i]= b-a[i];}
        sort(a.begin(), a.end());
        long long i=0, j=n-1;
        long long count=0;
        while(i<j){
            if(a[i]+a[j]>=0) {count++; i++; j--;}
            else if(a[i]<0) {i++;}
            else j--;
        }
        cout<<count<<endl;
    }


}