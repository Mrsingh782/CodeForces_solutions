#include <iostream>
#include<vector>
using namespace std;

int main(){
    long long int m;
    long long int s,n;
    cin>>m;
    

    while (m>0)
    {
        cin>>n;
        cin>>s;
        long long int k;
        k= (s/(n*n));
        cout<<k<<endl;
        

        m--;
    }

    
    
    return 0;

}