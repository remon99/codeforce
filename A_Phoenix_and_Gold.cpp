#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,b,a[105],m,sum=0;
        cin>>n>>b;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1) cout<<"NO";
        else{
        sort(a,a+n,greater<int>());
        for(int i=1;i<n;i++){
            sum+=a[i];
        }
        if(a[0]==b){
        if(sum==a[0]) cout<<"NO";
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
        }
        }
         else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
         }
        }
       cout<<endl;
    }
}