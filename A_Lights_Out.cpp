#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> a(5,vector<int>(5,1));
    // cout<<a[4][4]<<endl;
    
    for(int i=1; i<4; i++){
        for(int j=1; j<4; j++){
            
            int temp;
            cin>>temp;
            
            if(temp%2==0){

            }
            else {
                a[i][j] ^=1;
                a[i+1][j] ^=1;
                a[i-1][j] ^=1;
                a[i][j+1] ^=1;
                a[i][j-1] ^=1;
            }
            

        }
        // cout<<endl;
    }

    for(int i=1; i<4; i++){
        for(int j=1; j<4; j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }


}