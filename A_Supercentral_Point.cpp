#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cin>>n;
    vector<pair<int, int>> v;

    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b) );
    }

    int ans=0;
    for(int i=0; i<n; i++){
        bool left,right,up,down;
        left= right= up = down=false;
        for(int j=0; j<n; j++){

            if(v[i].first == v[j].first && v[i].second> v[j].second){
                left= true;
            }
            if(v[i].first == v[j].first && v[i].second< v[j].second){
                right= true;
            }
            if(v[i].first < v[j].first && v[i].second==v[j].second){
                up= true;
            }
            if(v[i].first > v[j].first && v[i].second==v[j].second){
                down= true;
            }
            
        
        }
        if(left&&right&&up&&down){
            ans++;
            
        }
        

        

    }
    cout<<ans;



}