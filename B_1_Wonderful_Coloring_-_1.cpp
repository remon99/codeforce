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
  int cnt1 = 0, cnt2 = 0;
  unordered_map<char, int> m;
  unordered_map<char, int>::iterator p;
  cin >> s;
  loop(i, s.size())
  {
    m[s[i]]++;
  }
  for (p = m.begin(); p != m.end(); ++p)
  {
    if (p->second >= 2)
      cnt2++;
    else
      cnt1++;
  }
  cout << cnt2 + (cnt1 / 2);
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
