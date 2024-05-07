#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[105],sum=0;
    cin>>n;
    if(n==1) cout<<0;
    else{
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        sum+=a[n-1]-a[i];
    }
    cout<<sum;
    }
}
   