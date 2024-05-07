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
  string a, b;
  cin >> a >> b;
  int x=a.size();
  int y=b.size();
  int res=(x*y)/__gcd(x,y);
  string s,d;
  for(int i=0;i<res/x;i++){
      s+=a;
  }
  for(int i=0;i<res/y;i++){
      d+=b;
  }
  if(s==d) cout<<s;
  else cout<<-1;
  cout<<endl;
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
