#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    long long int t,a,b,c,p,q;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		p=(c<a*b) ? b : -1;
		q=(a<c) ? 1 : -1;
		cout<<q<<" "<<p<<endl;
	}


}