#include <bits/stdc++.h>
using namespace std;
#define pys cout << "YES" << endl
#define pyn cout << "NO" << endl
#define loop(i, n) for (int i = 0; i < n; ++i)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define nl cout << endl
typedef vector<int> vi;
typedef long long ll;

void solve()
{
  ll n, m, x, div, sub,res;
  cin >> n >> m >> x;
  if(x%n){
  div=x/n;
  sub=x-(1+((div)*n));
  res=div+1+sub*m;
  cout<<res;
  }
  else{
    div=x/n;
    res=(n-1)*m+div;
    cout<<res;
  }
  nl;
}



int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());

  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}