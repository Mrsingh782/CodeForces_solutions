#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
int main(){
    int t; cin>>t; while(t--){
        int n,m; cin>>n>>m;
        char s[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>s[i][j];
            }
        }

        int count=0;

        for(int i=0; i<n; i++){
            if(s[i][m-1]=='R') count++; 
        }

        for(int i=0; i<m; i++){
            if(s[n-1][i]=='D') count++;
        }

        // s[n-1][m-1]= 't';
        // for(int i=0; i<n; i++){
        //     if(s[i][m-1]=='R') {count++; s[i][m-1]='t';}
        //     else s[i][m-1]='t';
        // }
        // for(int i=0; i<m; i++){
        //     if(s[n-1][i]=='D') {count++; s[n-1][i]='t';}
        //     else s[n-1][i]='t';
        // }
        

        // for(int i=n-2; i>=0; i--){
        //     for(int j=m-2; j>=0; j--){

        //         if(s[i][j]=='R') {
        //         if(s[i][j+1]!='t') {count++; s[i][j]='t';}
        //         else s[i][j]='t';
        //         }

        //         else if(s[i][j]=='D'){
        //         if(s[i+1][j]!='t') {count++; s[i][j]='t';}
        //         else s[i][j]='t';
        //         }
                
        //     }
        // }

        // for(int i=0; i<n; i++){
        //     for(int j=0; j<m; j++){
        //         cout<<s[i][j];
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        cout<<count<<endl;

    }


}