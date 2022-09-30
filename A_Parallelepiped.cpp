#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    long ans;
    int l1= sqrt(a*b/c);
    int l2= sqrt(a*c/b);
    int l3= sqrt(b*c/a);

    cout<<4*(l1+l2+l3);
    
}