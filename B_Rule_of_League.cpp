#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int t; cin>>t; while(t--){
        int a,b,c; cin>>a>>b>>c;
        if(c>b) swap(b,c);
        if(b==0 and c==0) {cout<<-1<<endl;continue;}
        int x=0; 
        x= (a-1)- (a*c);
        if(x>0 and x%(b-c)==0 ){
            x= x/(b-c);
            // x is the number of people who wins b times.
            // n-x is number of people who wins c times.
            int i;
            int k=b;
            int z=1;
            for(int i=0; i<b;i++ ){
                cout<<1<<" ";
            }
            z+= k;
            z++;
            for(int i=z; i<=a; i+=k){
                int h=b;
                while(h--){cout<<i<<" ";

                }
            }

            cout<<endl;
        }
        else cout<<-1<<endl;

    }


}