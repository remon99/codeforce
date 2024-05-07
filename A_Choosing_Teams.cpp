#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,a[2007],cnt=0;
    vector<int>v;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        v.push_back(a[i]+k);
    }
    for(int i=0;i<v.size();i++){
        if(v[i]<=5) cnt++;
    }
    cout<<cnt/3;
}