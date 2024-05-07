#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,cnt=0;
    vector<int>v;
    cin>>n;
    while(n>0){
        int md=n%10;
        v.push_back(md);
        n=n/10;
    }
    for(int i=0;i<v.size();i++){
        if(v[i]==0) continue;
        else{
            cnt++;
        }
    }
        cout<<cnt<<endl;
        for(int i=0;i<v.size();i++){
            if(v[i]==0) continue;
            else{
            cout<<v[i]*pow(10,i)<<" ";
        }
        }
        cout<<endl;
    }
    
}