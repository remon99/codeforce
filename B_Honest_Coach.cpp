#include<bits/stdc++.h>
using namespace std;
#define loop(i,n) for(int i=0;i<n;i++)
#define pys cout<<"YES"<<endl;
#define pyn cout<<"NO"<<endl;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[55],cnt=0;
        vector<int>v;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
        sort(a,a+n,greater<int>());
        for(int i=0;i<n-1;i++){
            int x=a[i]-a[i+1];
            v.push_back(x);
        }
        cout<<*min_element(v.begin(),v.end());
        cout<<endl;
	}
}