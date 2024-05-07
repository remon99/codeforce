#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s[0]>=65 && s[0]<=90)
    cout<<s;
    else{
        s[0]=toupper(s[0]);
        cout<<s;
    }
}