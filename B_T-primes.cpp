#include <bits/stdc++.h>
using namespace std;
bool hpf(long long a){
    long long x= sqrt(a);
    if(a==1) return false;
    for(int i=2; i<=x; i++){
        if(a%i ==0 ) return false;
    }
    return true;
}

int main(){
    long long n;
    cin>>n;
    while(n--){
        long long a;cin>>a;
        
        
        long long ans = sqrt(a);
        if((ans * ans)== a and hpf(ans)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        

    }
    
    

    return 0;
}


// 
