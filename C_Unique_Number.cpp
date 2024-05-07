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
  int n, i = 9, cnt = 0;
  vector<int> v;
  cin >> n;
  if (n <= 9)
    cout << n;
  else if (n > 45)
    cout << -1;
  else
  {
    while (1)
    {
      v.push_back(i);
      n=n-i;
      i = i - 1;
      if(n<=i){
        v.push_back(n);
        break;
      }
    }

    for (int i = v.size()-1; i >= 0; i--)
    {
      cout <<v[i];
    }
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
