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
  int n, m, cnt = 0;
  cin >> n >> m;
  int a[m + 1][n + 1];
  for (int i = 1; i <= m; ++i)
  {
    for (int j = 1; j <= n; ++j)
    {
      cin >> a[i][j];
    }
  }
  vector<set<int>> v(n + 1);
  for (int i = 1; i <= m; ++i)
  {
    for (int j = 1; j <= n ; ++j)
    {
      if (j == 1)
      {
        v[a[i][j]].insert(a[i][j + 1]);
        
      }
      else if(j==n){
        v[a[i][j]].insert(a[i][j-1]);
      }
      else
      {
        v[a[i][j]].insert(a[i][j - 1]);
        v[a[i][j]].insert(a[i][j + 1]);
      }
    }
  }
  for(int i=1;i<=n;++i){
   cnt+=n-v[i].size()-1;
  }
  cout<<cnt/2;
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
