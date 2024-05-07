#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,a[35],b[35],sum=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        if(a[0]>=b[0])
        {
            for(int i=0;i<n;i++)
            {
                sum+=a[i];
            }
            cout<<sum<<endl;
        }
        else
        {
        for(int i=0;i<k;i++){
            if(a[i]<b[i]) a[i]=b[i];
        }
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
        }
    }
}