#include<bits/stdc++.h>
using namespace std;
#define pys cout<<"YES"<<endl
#define pyn cout<<"NO"<<endl
#define loop(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define nl cout<<endl 
typedef vector<int>		vi;
typedef long long ll;

void solve(){
    int n,m,a[100002],b[100002],ps[100002];
    cin>>n;
    loop(i,n){
      cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
      sum+=a[i];
      ps[i]=sum;
    }
    cin>>m;
    loop(i,m){
      cin>>b[i];
      int res=lower_bound(ps,ps+n,b[i])-ps;
      cout<<res+1<<endl;
    }
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
