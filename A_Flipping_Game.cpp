#include <bits/stdc++.h>
using namespace std;
#define pys cout << "YES" << endl
#define pyn cout << "NO" << endl
#define loop(i, n) for (int i = 0; i < n; i++)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define nl cout << endl
typedef vector<int> vi;
typedef long long ll;

void solve()
{
  int n,maxx=0,cnt=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      for(int k=0;k<n;k++){
        if(k>=i and k<=j){
          if(a[k]==0) cnt++;
        }
        else{
          if(a[k]==1) cnt++;
        }
      }
      maxx=max(maxx,cnt);
      cnt=0;
    }
  }
  
  cout<<maxx;
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