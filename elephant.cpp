#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    if(1<=x<=1000000)
    {
        if(x==1||x==2||x==3||x==4||x==5)
        {
            cout<<"1";
        }
        else if(x%5==0)
        {
            x=x/5;
            cout<<x;
        }
        else
        {
            int cnt=0;
            while(x>5)
            {
                x=x-5;
                cnt ++;
            }
            cout<<cnt+1;
        }


    }
    return 0;
}
