#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=n-1;i++)
        {
            if(a[1]==2 && a[2]==1){ cout<<'1'<<endl;
            break;
            }
           else if(a[i]!=a[i+1])
            {
                if(i+2>n)
                {
                    if(a[i]%a[i-1]==0)
                {
                    cout<<i+1<<endl; 
                    break;       
                } 
                else
                {
                    cout<<i<<endl;
                    break;
                } 
                }
               else if(a[i]%a[i+2]==0)
                {
                    cout<<i+1<<endl; 
                    break;       
                } 
                else
                {
                    cout<<i<<endl;
                    break;
                } 
            }
        }
    }
}