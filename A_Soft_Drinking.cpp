#include<bits/stdc++.h>
using namespace std;
#define pys cout<<"YES"<<endl
#define pyn cout<<"NO"<<endl
#define loop(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define f first
//#define nl cout<<endl
#define s second 
typedef vector<int>		vi;
typedef long long ll;

void solve(){
    int  n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink=k*l;
    int lime=c*d;
    int need=drink/nl;
    while(true){
        if(need<=lime and np*need<=p) break;
        else need--;
    }
    cout<<need/n;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());

  int t = 1;
  //cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}
