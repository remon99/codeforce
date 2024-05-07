#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum;
    cin>>a;
    for(int i=0;i>=0;i++)
    {
        a+=1;
        int cnt=0;
        string s=to_string(a);
        sort(s.begin(),s.end());
        for(int j=0;j<s.size();j++)
        {
            if(s[j]==s[j+1]) cnt++;
        }
        if(cnt==0)
        {
            cout<<a;
            break;
        }
    }
    
    
}