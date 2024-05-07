#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        //if(x>n) cout<<0<<endl;
        //else
        //{
            int div=n/x;
            if(x*div+y<=n) cout<<div*x+y;
            else cout<<(div-1)*x+y;
            cout<<endl;
        //}
    }
}
