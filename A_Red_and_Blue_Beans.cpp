#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
    while(t--){
    long long r,b,d;
    cin>>r>>b>>d;
    if(r>b) swap(r,b);
    if(r==b) cout<<"YES";
    else if((d+1LL)*r>=b) cout<<"yes";
    else cout<<"NO";
    cout<<endl;
    }
}