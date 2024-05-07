#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=1,maxx=0;
    
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            if(cnt>maxx){
                maxx=cnt;
            }
            cnt=1;
        }
        else
        cnt++;
    }
    if(cnt>maxx)
        maxx=cnt;
    printf("%d\n",maxx);
    return 0;
} 