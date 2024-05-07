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
  ll n, t, cnt = 0, res, sum = 0;
  cin >> n;
  for (int i = 0; true; ++i)
  {
    t = 5 * pow(2, i);
    cnt++;
    sum += t;
    if (sum >= n)
      break;
  }
  ll str = pow(2, cnt - 1);
  ll i = 1;
  while (true)
  {
    if (n > sum - str * i)
      break;
    else
      i++;
  }
  if (i == 1)
    cout << "Howard";
  if (i == 2)
    cout << "Rajesh";
  if (i == 3)
    cout << "Penny";
  if (i == 4)
    cout << "Leonard";
  if (i == 5)
    cout << "Sheldon";
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