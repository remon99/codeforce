#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,sub;
    cin>>a>>b;
    if(a==b) cout<<0;
    else{
        if(a>b){
            sub=a-b;
            if(sub%10==0) cout<<sub/10;
            else cout<<(sub/10)+1;
        }
        else{
            sub=b-a;
            if(sub%10==0) cout<<sub/10;
            else cout<<(sub/10)+1;
        }
    }
    cout<<endl;
    }

}