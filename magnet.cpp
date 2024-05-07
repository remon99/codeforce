#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    if(n==1)
    cout<<"1";
    else {
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n-1;i++)
    {
        if(a[i]!=a[i+1])
        cnt++;
    }
    cout<<cnt+1;
    }
}