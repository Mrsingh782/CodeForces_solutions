#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,even(0), lasteven(0), lastodd(0);
    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(x%2==0) even++, lasteven=i;
        else even--, lastodd=i; 
    }

    cout<< (even>0 ? lastodd: lasteven);
    return 0;
}