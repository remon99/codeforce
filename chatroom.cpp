#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    s2="hello";
    int x=0,y=0;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==s2[x])
        {
            x++;
            y++;
        }
    }
    if(y==5) cout<<"YES";
    else cout<<"NO";
}    
 
