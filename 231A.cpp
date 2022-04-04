#include <iostream>
using namespace std;
int main(){
    int ans=0;
    int n;
    cin>>n;
    int a,b,c;
    for(int i=0; i < n ; i++){
        
        cin>>a>>b>>c;
        
        if((a+b+c) >=2) {
            ans++;
        }

    }
    return ans;
}