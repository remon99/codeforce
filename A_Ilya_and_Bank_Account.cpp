#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=0) cout<<n;
    else{
        int a,b,div1,div2;
        a=-1*(n%10);
        n=n/10;
        b=-1*(n%10);
        div2=n/10;
        if(div2==0){
            if(a>b){
            if(b==0) cout<<0;
            else cout<<"-"<<b;
        }
        else{
            if(a==0) cout<<0;
            else cout<<"-"<<a;
        } 
        }
        else{
        if(a>b){
            cout<<div2<<b;
        }
        else cout<<div2<<a;
        }
    }
}