#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int gen=a*n;
    if(n%m==0){
        int spes=(n/m)*b;
        if(gen<=spes) cout<<gen;
        else cout<<spes;
    }
    else{
        int e=(n/m+1)*b;
        int f=(n/m)*b+(n%m)*a;
        int g=min(e,f);
        if(gen<=g) cout<<gen;
        else cout<<g;
    }
    
}