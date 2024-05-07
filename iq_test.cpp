#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt1=0,cnt2=0;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(n==3)
        {
            if(a[1]%2!=a[2]%2)
            {
                if(a[1]%2==a[3]%2){ cout<<'2';
                break;
                }
                else {cout<<'1';
                break;
                } 
            }
            else{
                cout<<'3';
                break;
            }
        }
        
        else if(a[i]%2!=a[i+1]%2)
        {
            if(a[i]%2==a[i+2]%2)
            {
                cout<<i+1;
                break;
            }
            else{
                 cout<<i;
                 break;
            }
            
            
        }
    }

}