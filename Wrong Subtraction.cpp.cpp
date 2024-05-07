#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=0; i<n; i++)
    {
        if(m%10==0)
        {
            m=m/10;

        }
        else
        {
            m=m-1;
        }

    }
    cout<<m;
    return 0;
}
