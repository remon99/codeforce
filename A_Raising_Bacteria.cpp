#include<bits/stdc++.h>
using namespace std;
#define loop(i,n) for(int i=0;i<n;i++)
#define pys cout<<"YES"<<endl;
#define pyn cout<<"NO"<<endl;
typedef long long ll;

int main(){
	int n,temp,sum=1,cnt=0;
    cin>>n;
    while(n!=0){
        for(int i=1;true;i++){
            sum*=2;
            if(sum==n) break;
            else if(sum>n){
                sum=sum/2;
                break;
            }
        }
        cnt++;
        n=n-sum;
        sum=1;
    }
    cout<<cnt;
}    
