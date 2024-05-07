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
  ll n, sum = 0, cnt = 0;
  int q = INT_MIN, b = INT_MIN, temp;
  vi a;
  cin >> n;
  loop(i, n)
  {
    int x;
    cin >> x;
    a.pb(x);
  }
  a.pb(0);
  loop(i, n )
  {
    if (a[i] > 0)
    {
      if (a[i] > q)
        q = a[i];
      if (a[i + 1] > 0)
        continue;
      else
      {
       // cout << q << endl;
        sum += q;
        q = INT_MIN;
      }
    }
    else
    {
      if (a[i] > b)
        b = a[i];
      if (a[i + 1] < 0)
        continue;
      else
      {
        //cout << b << endl;
        sum += b;
        b = INT_MIN;
      }
    }
  }
  cout << sum << endl;
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
