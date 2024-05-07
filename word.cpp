#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt1=0;int cnt2=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            cnt1++;
        }
        else cnt2++;
    }
    if(cnt1>cnt2)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }
    
}