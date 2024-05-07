#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    
    long cnt1=0,cnt2=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='4') cnt1++;
        else if(s[i]=='7') cnt2++;   
    }
  
   
        if(cnt1+cnt2 == 4 || cnt1+cnt2==7)
        cout<<"YES";
    
   
    
    else cout<<"NO";
    
}