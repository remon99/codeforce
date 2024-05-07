#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,d;
    vector<int>v;
    cin>>s>>d;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==d[i]) v.push_back(0);
        else v.push_back(1);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }

}