#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,row,col;
    cin>>n;
    for(int row=1; row<=n; row++)
    {

        for(col=1; col<=row; col++)

            cout<<"*";
        for( col=1; col<=n-row; col++)
            cout<<"#";
        for( col=1; col<=n-row; col++)
            cout<<"#";
        for(col=1; col<=row; col++)

            cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    }
    return 0;
}
