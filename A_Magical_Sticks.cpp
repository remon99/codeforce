#include<bits/stdc++.h>
using namespace std;
#define loop(i,n) for(int i=0;i<n;i++)
#define pys cout<<"YES"<<endl;
#define pyn cout<<"NO"<<endl;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1) cout<<1;
        else{
            if(n%2!=0) cout<<(n/2)+1;
            else cout<<n/2;
        }
        cout<<endl;
	}
}