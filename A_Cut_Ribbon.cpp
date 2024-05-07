#include <bits/stdc++.h>
using namespace std;
#define pys cout << "YES" << endl
#define pyn cout << "NO" << endl
#define loop(i, n) for (int i = 0; i < n; ++i)
#define MOD 1000000007
#define pb push_back
#define nl cout << endl
typedef vector<int> vi;
typedef long long ll;
unordered_map<ll, ll> mp;

ll go(ll n, ll a, ll b, ll c)
{
  if (n == 0)
    return 0;
  else if (n < 0)
    return INT_MIN;
  if (mp.count(n))
    return mp[n];
  return mp[n] = 1 + max(go(n - a, a, b, c), max(go(n - b, a, b, c), go(n - c, a, b, c)));
}

void solve()
{
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  cout << go(n, a, b, c);
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());

  int t = 1;
  //cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}