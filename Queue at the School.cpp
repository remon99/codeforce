#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    string s;
    cin>>n>>m>>s;
    for(int j=0;j<m;j++)
    {

    for(int i=0;i<n-1;i++)
    {
        
        if(s[i]=='B' && s[i+1]=='G')
        {
             swap(s[i],s[i+1]);
             i++;
             
        }
       
    }
    }
    cout<<s;


}