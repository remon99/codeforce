#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,s,d,f,cnt=0;
    cin>>a>>s>>d>>f;
    vector<int>v;
    v.push_back(a);
    v.push_back(s);
    v.push_back(d);
    v.push_back(f);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++){
        if(v[i]==v[i+1]) cnt++;
    }
    cout<<cnt;
}