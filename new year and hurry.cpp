#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sub,cnt=0;
    cin>>n>>k;
    sub=k;
    for(int i=1;i<=n;i++){
        sub+=i*5;
        if(sub<=240) cnt++;
        else break;
    }
    cout<<cnt;
}