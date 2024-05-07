#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];

int main()
{
    int n;
    cin>>n;
    long long sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
       long long sum=sum[r]-sum[l-1];
       cout<<sum<<"\n";
    }

}