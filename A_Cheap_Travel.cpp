#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    int temp1= n*a;
    int temp2= ((n/m)*b);
    
    temp2 += (b)>((n%m)*a)? (n%m)*a : b;
    temp2= min(temp2, temp1);
    cout<<temp2;
}