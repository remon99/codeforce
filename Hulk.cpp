#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0) cout<<"I hate"<<" ";
        else cout<<"I love"<<" ";
        cnt++;
        if(cnt==n)
        break; 
        else cout<<"that"<<" ";
    }
    cout<<"it";
}