#include <iostream>

using namespace std;

int main()
{
    long k,n,w,mul,sum=0,sub;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        mul=k*i;
        sum=sum+mul;
    }
    if(sum==n || sum<n)
    {
        cout<<"0";
    }
    else{
        sub=sum-n;
        cout<<sub;
    }
    return 0;
}
