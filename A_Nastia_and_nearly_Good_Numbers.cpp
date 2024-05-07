#include<bits/stdc++.h>
using namespace std;
#define loop(i,n) for(int i=0;i<n;i++)
#define pys cout<<"YES"<<endl;
#define pyn cout<<"NO"<<endl;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,mul;
        cin>>a>>b;
        if(b==1){
            pyn;
        }
        else{
        mul=(a*b)*4;
        for(int i=1;i<1e6;i++){
            a=a*i;
            if((mul-a)%a==0){
                if(a!=mul-a){
                pys;
                cout<<a<<" "<< mul-a <<" "<<mul<<endl;
                break;
                }
            }

        }
        }
	}
}