#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,cnts=0,cnta=0;
        cin>>n>>a>>b;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            if(s[0]=='E' || s[0]=='Q' || s[0]=='U' || s[0]=='I' || s[0]=='N' || s[0]=='O' || s[0]=='X' ) cnts++;
            else cnta++;
        }
        if(cnta==0) cnta++;
        if(cnts==0) cnts++;
        if(cnts*a==cnta*b) cout<<"DRAW"<<endl;
        else if(cnts*a<cnta*b) cout<<"ANURADHA"<<endl;
        else cout<<"SARTHAK"<<endl;

    }
}