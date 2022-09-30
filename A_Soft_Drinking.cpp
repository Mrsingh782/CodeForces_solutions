#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int t1,t2,t3;
    t1= ((k*l)/n);
    t2= (c*d);
    t3=(p/np);
    t1=  min(t1,min(t2,t3));
    cout<<t1/k;
}