#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return 0;
    }
     return 1;
}
int main()
{
    int n;
    cin>>n;
    if(n%2==0){
        if((n/2)%2==0) cout<<n/2<<" "<<n/2;
        else cout<<n/2+1<<" "<<n/2-1;
    }
    else{
        int sub;
        sub=n-4;
        for(int i=4;i<=n;i++){
            isPrime(sub);
            isPrime(i);
            if(isPrime(sub)!=1 and isPrime(i)!=1){
                cout<<i<<" "<<sub;
                break;
            }
            else sub-=1;
        }

    }
}
