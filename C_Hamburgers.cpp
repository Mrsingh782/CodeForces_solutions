#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;

int nb,ns,nc;  // jo padi he already.
int pb,ps,pc; // unka price.
long long r; // budget.
int cb,cs,cc; // jo hame chahiye.

bool check(long long n){
    if(  ((pb*max(0, (cb*n - nb))) +(ps*(max(0,cs*n-ns)))+ (pc*(max(0, cc*n - nc)))) <=r ) return true;
    else return false;
}

int main(){
    
    string s; cin>>s; 
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;

    for(auto it: s){
        if(it=='B') cb++;
        else if(it=='S') cs++;
        else cc++;
    }

    long long ans=0;
    long long l=0;
    long long ri=1e14;
    long long m;

    while(l<ri){
        m= l + (ri-l)/2;
        if(check(m)){ ans=m; l=m+1;}
        else ri=m-1;
    }

    cout<<ans;
    

}