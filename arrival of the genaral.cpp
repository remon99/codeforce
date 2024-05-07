#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,max=0,min=1000,maxin=0,minin=0;
    cin>>n;
    for(i=1;i<=n;i++){
        int x;
        cin>>x;
        if(x>max){
            max=x;
            maxin=i;
        }
        if(x<=min){
            min=x;
            minin=i;
        }
    }
    if(maxin>minin) cout<<(maxin-1)+(n-minin)-1;
    else cout<<(maxin-1)+(n-minin);
    
}