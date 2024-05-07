#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    vector<char>v;
    cin>>n>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1]) continue;
        else v.push_back(s[i]);
    }
    if(v.size()==26) cout<<"YES";
    else cout<<"NO";
}