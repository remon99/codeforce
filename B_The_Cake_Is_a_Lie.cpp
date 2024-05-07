#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        
        if(n==1 && m==1 && k==0) cout<<"YES";
        else if(n==1 && m==1 && k==1) cout<<"NO";
        else if(n==1){
            int sub=(m-1)*1;
            if(sub==k) cout<<"YES";
            else cout<<"NO";
        }
        else if(m==1){
            int sub=(n-1)*m;
            if(sub==k) cout<<"YES";
            else cout<<"NO";
        }
        else if(n!=1 && m!=1){
            int sub=((m-1)*1)+((n-1)*m);
            if(sub==k) cout<<"YES";
            else cout<<"NO";
        }
        
        cout<<endl;
    }
}