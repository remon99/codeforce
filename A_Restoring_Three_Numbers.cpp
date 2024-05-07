#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d;
    vector<int>v;
    cin>>a>>b>>c>>d;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    sort(v.begin(),v.end(),greater<int>());
    cout<<v[0]-v[1]<<" "<<v[0]-v[2]<<" "<<v[0]-v[3];
}