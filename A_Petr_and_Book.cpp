#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    vector<int> v(7);
    for(int i=0; i<7; i++){
        cin>>v[i];
    }

    
    
    int ans =0;

    int day=INT_MIN;
    while(t){
        
        for(int i=0; i<7; i++){
            if(t>=v[i] ){
                t -= v[i];
                if(t==0){
                    
                    ans=i+1;
                    break;
                }
            }
            else {
                t=0;
                ans=i+1;
                break;
            }

        }
    }
    cout<<ans;

}