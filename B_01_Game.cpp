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
  string s;
  int cnt0 = 0, cnt1 = 0;
  cin >> s;
  loop(i, s.size())
  {
    if (s[i] == '1')
      cnt1++;
    else
      cnt0++;
  }
  if (cnt1 == 0 || cnt0 == 0)
    cout << "NET";
  else
  {
    int m = min(cnt1, cnt0);
    if (m % 2)
      cout << "DA";
    else
      cout << "NET";
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