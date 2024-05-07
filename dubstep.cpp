#include<bits/stdc++.h>
using namespace std;
void dub(string s){
    if(s.length()==0) return;
    if(s[0]=='W' and s[1]=='U' and s[2]=='B'){
        cout<<" ";
        dub(s.substr(3));
    }
    else {
        cout<<s[0];
        dub(s.substr(1));
    }
    
}
int main()
{
    string s;
    cin>>s;
    dub(s);
    
}