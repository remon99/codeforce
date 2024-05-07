#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,sub,sum;
    cin>>n>>m;
    int a[100005];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    long long int  t=a[0]-1;
    for(int i=0;i<m-1;i++)
    {
        if(a[i]>a[i+1])
        {
            t+=a[i+1]+n-a[i];
        }
        
        else
        {
            t+=a[i+1]-a[i];
        }
    }
    cout<<t;
}