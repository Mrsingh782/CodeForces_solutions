#include <bits/stdc++.h>
using namespace std;
// Function to return GCD of Two numbers.
long long gcd(long long  a, long long  b){
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

// Function to return LCM of two numbers.
long long lcm(long long a, long long b){
    return (a / gcd(a, b)) * b;
}

int main(){
    int t; cin>>t; 

    // cout<<gcd(2,3);
    while(t--){
        // cout<<t<<endl;
        long long n; cin>>n;
        long long ans; ans=0;

        for(long long i=1; i<=n; i++){
            for(long long  j=i; j<=n; j++){
                // cout<<"checking"<<i<<" "<<j<<endl;
                long long k= gcd(i,j);
                k= ((i*j)/(k*k));
                if(k<=3){
                    if(i==j) {ans++; 
                    // cout<<i<<" "<<j<<endl;
                    }
                    else {ans+=2; 
                    // cout<<i<<" "<<j<<endl;
                    // cout<<j<<" "<<i<<endl;
                    }
                } 
                
            }
        }
        cout<<ans<<endl;
        // cout<<endl;

    }

}