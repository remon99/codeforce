#include<bits/stdc++.h>
using namespace std;
#define pys cout<<"YES"<<endl
#define pyn cout<<"NO"<<endl
#define loop(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define nl cout<<endl 
typedef vector<int> vi;
typedef long long ll;

void solve(){
	long long n,k,ans=INT_MIN;
	cin>>n>>k;
	vector<int>v(n);
	loop(i,n){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	vector<long long>pref(n);
	pref[0]=v[0];
	for(int i=1;i<n;++i){
		pref[i]=pref[i-1]+v[i];
	}
	for(int i=0;i<k;i++){
		long long dif=pref[n-1-i]-pref[2*k-2*i-1];
		ans=max(ans,dif);
	}
	ans=max(ans,pref[n-1-k]);
	cout<<ans<<endl;
}

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
 
  int t = 1;
  cin >> t;
  while(t--) {
	solve();
  }
 
  return 0;
}
