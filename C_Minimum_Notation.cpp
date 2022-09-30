#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int t; cin>>t; while(t--){
        string s; cin>>s;
        int n=s.size();
        char minn='9';
        for(int i=n-1; i>=0; i--){
            if(minn>=s[i]) minn=s[i];
            else s[i]= min((char)(s[i]+1), (char)'9');

        }

        sort(s.begin(), s.end());
        cout<<s<<endl;
    }
    // sort krke expect ki kisi bhi numbers ko exchange kar skte he.
    // but we can only exchange numbers and put (d+1,9) in any place.
    // d+1 ka logic we have to deduce.



}