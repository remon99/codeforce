#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,s,d,f;
    cin>>a>>s>>d;
    f=a+s;
    sort(f.begin(),f.end());
    sort(d.begin(),d.end());
    if(d.compare(f)==0) cout<<"YES";
    else cout<<"NO";
    
}