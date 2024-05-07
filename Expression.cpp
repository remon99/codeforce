#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int a,b,c,q,w,e,r,t,max;
    cin>>a>>b>>c;
    q=a+b*c;
    v.push_back(q);
    w=a*(b+c);
    v.push_back(w);
    e=a*b*c;
    v.push_back(e);
    r=(a+b)*c;
    v.push_back(r);
    t=a+b+c;
    v.push_back(t);
    max=*max_element(v.begin(), v.end());
    cout<<max;
    
}