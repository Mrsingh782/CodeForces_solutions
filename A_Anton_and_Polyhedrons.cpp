#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;


    int ct1,ct2,ct3,ct4,ct5;
    ct1=ct2=ct3=ct4=ct5=0;

    for(int i=0; i<t; i++){
        cin>>s;
        if(s=="Icosahedron") ct1++;
        if(s=="Cube") ct2++;
        if(s=="Tetrahedron") ct3++;
        if(s=="Dodecahedron") ct4++;
        if(s=="Octahedron") ct5++;
    
    }
    int ans=0;
    ans+= ct1*20 + ct2*6 + ct3*4 + ct4*12 + ct5*8;
    cout<<ans;


}

