#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n){
        int s;
        cin>>s;
        long arr[s];
        long long tsum=0;
        for(int i=0; i<s; i++){
            cin>>arr[i];
            tsum += arr[i];
        }
        sort(arr, arr+s);

        int cred=0;
        int cblue=s;
        long long sblue=tsum;
        long long sred=0;

        while(cblue> cred){
            if(sred>sblue){
                cout<<"YES"<<endl;
                break;
            }

            sred += arr[s-1];
            s--;
            sblue -= sred;
            cred++;
            cblue--;

        }
        //cout<<cred<<endl<<cblue<<endl;
        //cout<< sred<<endl<<sblue<<endl;
        
        if(cred<cblue && sred>sblue) {} 
        else cout<<"NO"<<endl;

        n--;
    }
    return 0;
}
