#include<bits\stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<char>v;
    int cnt=0;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=97 && s[i]<=122) 
        
        v.push_back(s[i]);
    }if(v.size()==0) cout<<"0";
    else
    {
        sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]==v[i+1])
        continue;
        else cnt++;
    }
    if(1==v.size()) cout<<"1";
    else cout<<cnt+1;
    }
}