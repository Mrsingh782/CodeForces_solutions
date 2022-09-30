#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
long long check(long long a, long long b){
    cout<<"? "<<a<<" "<<b<<endl;
    cin>>a;
    return a;

}

int main(){
    long long a,b;
    long long c,d;
    for(long long i=2; i<26; i++){
        c=check(1,i);
        d=check(i,1);
        if(c==-1 or d==-1) {cout<<"! "<<i-1<<endl; break;}
        else if( c!= d) {cout<<"! "<<c+d<<endl; break;}
        
    }


}