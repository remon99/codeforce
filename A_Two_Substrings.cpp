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
const int N = 1e5 + 1;

void solve()
{
  bool flag1 = false, flag2 = false;
  string s;
  cin >> s;
  for (int i = 0; i < s.size()-1; ++i)
  {
    if (s[i] == 'A')
    {
      if (s[i + 1] == 'B')
      {
        //string a = s.substr(i + 2, s.size() - (i + 2));
        for (int k = i+2; k < s.size() - 1; ++k)
        {
          if (s[k] == 'B')
          {
            if (s[k + 1] == 'A')
            {
              flag1 = true;
              break;
            }
          }
        }
        if (flag1)
          break;
      }
    }
  }
  for (int i = 0; i < s.size()-1; ++i)
  {
    if (s[i] == 'B')
    {
      if (s[i + 1] == 'A')
      {
        //string a = s.substr(i + 2, s.size() - (i + 2));
        for (int k = i+2; k < s.size() - 1; ++k)
        {
          if (s[k] == 'A')
          {
            if (s[k + 1] == 'B')
            {
              flag2 = true;
              break;
            }
          }
        }
        if (flag2)
          break;
      }
    }
  }
  (flag1 or flag2) ? pys : pyn;
}
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());

  int t = 1;
  // cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
