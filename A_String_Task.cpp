#include <bits/stdc++.h>
using namespace std;
#define focin(a,n) vector<int> a(n,0); for(int i=0;i<n;i++) cin>>a[i];
#define fout(a) for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
bool vowel(char p){
    return ((p=='a') or (p=='e')or (p=='i') or( p=='o') or (p=='u') or (p=='A') or (p=='E') or( p=='I') or (p=='O') or (p=='U') or (p=='y') or (p=='Y') );
    
}
int main(){
    string s;
    cin>>s;
    char c;
    for(int i=0; i<s.size(); i++){
        if(!vowel(s[i])){
            cout<<".";
            c=tolower(s[i]);
            cout<<c;
        }
    }
    


}