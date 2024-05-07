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
  int n, cnt = 0;
  string s;
  vector<char> v, b;
  cin >> n >> s;
  loop(i, s.size())
  {
    if (cnt)
    {
      v.pb('0');
      b.pb(s[i]);
    }
    else if (s[i] == '2')
    {
      v.pb('1');
      b.pb('1');
    }
    else if (s[i] == '0')
    {
      v.pb('0');
      b.pb('0');
    }
    else if (s[i] == '1')
    {
      cnt++;
      v.pb('1');
      b.pb('0');
    }
  }
  for (auto it : v)
  {
    cout << it;
  }
  nl;
  for (auto it : b)
  {
    cout << it;
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
