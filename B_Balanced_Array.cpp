#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum1=0,b,sum2=0,a;
        cin>>n;
        if((n/2)%2!=0) cout<<"NO"<<"\n";
        else{
            cout<<"YES"<<endl;
            for(int i=1;i<=n/2;i++){
                b=2*i;
                cout<<b<<" ";
                sum1+=b;
            }
            for(int i=1;i<=(n/2)-1;i++){
                a=2*i-1;
                cout<<a<<" ";
                sum2+=a;
            }
            cout<<sum1-sum2;
            cout<<"\n";
        }
    }
}