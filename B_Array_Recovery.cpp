#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int t; cin>>t; while(t--){
        int n; cin>>n; int a[n]; for(int i=0; i<n; i++) cin>>a[i];
        int c=a[0];
        
        bool flag=false;

        vector<int> temp;
        temp.push_back(c);
        for(int i=1; i<n; i++){
            if(a[i]==0 or a[i]>c) {
                c+=a[i]; 
                temp.push_back(c);
            }
            else{ cout<<-1;
            flag=true;
            break;
            }
        }

        if(!flag) for(auto it: temp) 
            {cout<<it<<" "; }
        cout<<endl;


    }


}