#include <iostream>

using namespace std;

int main()
{
    int m,n,sqr,cnt;
    cin>>m>>n;
    if(1<=m<=n<=16)
    {
        sqr=m*n;
        if(sqr%2==0)
        {
            cnt=sqr/2;
            cout<<cnt;
        }
    else
    {
        cnt=(sqr-1)/2;
        cout<<cnt;
    }
    }
    return 0;
}
