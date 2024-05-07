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
		int n,a[102],cnt=0;
		vector<int>v;
		cin>>n;
		loop(i,2*n){
			cin>>a[i];
		}
		v.push_back(a[0]);
		for(int i=1;i<2*n;i++){
			for(int j=0;j<v.size();j++){
				if(a[i]==v[j]){
					cnt++;
					break;
				}
			}
			if(cnt==0) v.push_back(a[i]);
			cnt=0;
		}
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}