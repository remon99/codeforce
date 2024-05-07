#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[105];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[j]==i){
                cout<<j<<" ";
                break;
            }
        }
    }
}