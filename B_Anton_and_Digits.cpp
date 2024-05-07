#include<bits/stdc++.h>
using namespace std;
#define pys cout<<"YES"<<endl
#define pyn cout<<"NO"<<endl
#define loop(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define nl cout<<endl 
typedef vector<int>		vi;
typedef long long ll;

void solve(){
    ll k2,k3,k5,k6;
    ll sum=0;
    cin>>k2>>k3>>k5>>k6;
    ll a=min(k2,min(k5,k6));
    sum+=256*a;
    if(k2>a){
        k2-=a;
        ll w=min(k2,k3);
        sum+=32*w;
    } 
    cout<<sum;
}
 

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
 
  int t = 1;
  //cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}