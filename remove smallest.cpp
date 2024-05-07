#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(a[j]<a[j+1]) swap(a[j],a[j+1]);
            }
        }
        for(int i=0;i<n-1;i++){
            if(a[i]-a[i+1]==1 || a[i]-a[i+1]==0) cnt++;
        }
        if(cnt==n-1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}