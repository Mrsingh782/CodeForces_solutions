#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        long long int l,r,a;
        cin>>l>>r>>a;
        long long int temp=0;
        // cout<<"got here"<<endl;
        if(r==a && (a> l)){
            cout<<(a-1)<<endl;
            goto z;
        }

        if(a==1) {
            cout<<r<<endl;
            goto z;
        }

        
    
        for(long long int k= (r-a); k <= r; k++){
            // cout<<"comparing"<<k<<"   "<<a<<endl;
            if(k>= l){
                long long int ans = (k/a)+ (k%a);
                temp = max(temp, ans);
            
            }
            
        }

        cout<<temp<<endl;
        z:;
        t--;
        
    }
    return 0;
}