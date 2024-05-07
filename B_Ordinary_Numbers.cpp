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
  int n;
  cin >> n;
  int res = 0;
  for (ll pw = 1; pw <= n; pw = pw * 10 + 1) {
    for (int d = 1; d <= 9;  d++) {
      if (pw * d <= n) {
        res++;
      }
    }
  }
  cout << res << endl;
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
