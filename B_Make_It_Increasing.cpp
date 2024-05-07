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
  int n, cnt = 0,a[31];
  cin >> n;
  loop(i, n)
  {
    cin >> a[i];
  }
  for (int i = n - 2; i >= 0; --i)
  {
    while(a[i]>=a[i+1] and a[i]>0){
      a[i]/=2;
      cnt++;
    }
    if(a[i]==a[i+1]){
      cout<<-1<<endl;
      return;
    }
  }
  cout << cnt;
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
