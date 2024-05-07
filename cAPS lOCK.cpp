#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=65 && s[i]<=90)
            cnt++;
        }
       
    if(s[0]>=65 && s[0]<=90) 
    {
        
        if(cnt==s.size()) 
        {
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            cout<<s;
        }
        else cout<<s;
        
    }
    else if(cnt==s.size()-1)
    {
        int c = 0;
        char ch;
        while (s[c] != '\0')
        {
          ch = s[c];
        if (ch >= 'A' && ch <= 'Z')
            s[c] = s[c] + 32;
        else if (ch >= 'a' && ch <= 'z')
            s[c] = s[c] - 32;  
            c++;  
        }
        cout<<s;
    } 
    else cout<<s;
    
}