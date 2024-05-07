#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,n) for(int i=0;i<n;i++)
#define pys cout<<"YES"<<endl;
#define pyn cout<<"NO"<<endl;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
        ll sum,sum2=0,sum3;
		cin>>n;
		sum=(pow(2,n+1))-2;
        for(int i=1;i<(n/2);i++){
            sum2+=(pow(2,i));
        }
        sum2+=pow(2,n);
		sum3=sum-sum2;
        cout<<abs(sum3-sum2)<<endl;
	}
}