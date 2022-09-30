#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<long long> a(n,0); for(long long i=0;i<n;i++) cin>>a[i];
#define fout(a) for(long long i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    long long t; cin>>t; while(t--){
        long long n; cin>>n;
        vector<pair<long long, long long>> a(n);
        for(long long i=0; i<n; i++) cin>>a[i].first;
        for(long long i=0; i<n; i++) cin>>a[i].second;

        sort(a.begin(), a.end());
        long long sum=0;
        long long zero=0, one=0;
        
        for(auto it: a){
            sum+= it.second;
            if(it.first==0) zero++;
            else one++;
        }

        long long p=min(zero,one);

        for(long long i=zero-1; i>= zero-p; i--) {sum+= a[i].second;  
        // cout<<a[i].second<<"  ";
        }
        for(long long i=a.size()-1; i>= a.size()-p; i--) {sum+=a[i].second; 
        // cout<<a[i].second<<"  ";
        }

        if(zero==one) {sum-= min(a[0].second, a[p].second);}

        cout<<sum<<endl;


        


    }



}