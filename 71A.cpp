#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n; 
    cin>>n;
    vector<string> abc;
    
    for (int j = 0; j <= n; j++)
    {
        string s;
        getline(cin, s);
    
        abc.push_back(s);
    }
    int i=0;
    

   for (int k = 0; k <= n; k++)
   {
       int s=abc[i].size();
        if(abc[i].size() > 10) 
        cout<<abc[i][0]<<(s -2) <<abc[i][s-1]<<endl;
        else cout<<abc[i]<<endl;
        i++;
                
   }
   

    return 0;

}