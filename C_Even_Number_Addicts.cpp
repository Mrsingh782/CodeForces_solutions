#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<long long> a(n,0); for(long long i=0;i<n;i++) cin>>a[i];
#define fout(a) for(long long i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    long long t; cin>>t; while(t--){
        long long n; cin>>n; long long a;
        
        long long even=0,odd=0;

        while(n--){
            cin>>a;
            if(a%2==0) even++;
            else odd++;
        }

        if(odd==0) {cout<<"Alice"<<endl;}
        else if(odd%4==3 or odd%4==0) {cout<<"Alice"<<endl;}
        else {cout<<"Bob"<<endl;}

    }


}