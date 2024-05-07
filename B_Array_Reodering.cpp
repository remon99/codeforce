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
  int i;
  vector<string> v = {"a"};
  vector<vector<string>> ans;
  vector<pair<string, int>> p;
  for (int i = 0; i < v.size(); i++)
  {
    string sorted = v[i];
    sort(sorted.begin(), sorted.end());
    p.emplace_back(sorted, i);
  }
  sort(p.begin(), p.end());
  vector<string> temp;
  for (i = 0; i < p.size() - 1; i++)
  {
    temp.push_back(v[p[i].second]);
    if (p[i].first != p[i + 1].first)
    {
      ans.push_back(temp);
      temp.clear();
    }
  }
  //cout<<i<<endl;
  if (p[i-1].first == p[i].first)
  {
    temp.push_back(v[p[i].second]);
    ans.push_back(temp);
    temp.clear();
  }
  else
  {
    temp.push_back(v[p[i].second]);
    ans.push_back(temp);
    temp.clear();
  }

  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[i].size(); j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
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
