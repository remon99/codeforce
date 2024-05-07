#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        int a[n];
        map<int,int>m;
        for (int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        for(auto it:m){
            sum+=(it.second/3);
        }
        cout<<sum<<endl;
    }
    return 0;
}