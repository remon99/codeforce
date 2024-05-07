#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long int n,sqr;
        cin>>n;
        if(n==1) cout<<"NO";
        else if(n==2 || n==4) cout<<"YES";
        else if(n%2!=0) cout<<"NO";
        else{
            int a=n/2;
            int s=sqrt(a);
            sqr=sqrt(n);
            if(sqr*sqr==n || s*s==a) cout<<"YES";
            else cout<<"NO";
        }
        cout<<endl;
    }
}