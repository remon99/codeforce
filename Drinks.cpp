#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t;
    double sum=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a;
        
        cin>>a;
        sum+=a;
        
    }
    printf("%.12llf",sum/t);

}