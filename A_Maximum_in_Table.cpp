#include<bits/stdc++.h>
using namespace std;
#define pys cout<<"YES"<<endl
#define pyn cout<<"NO"<<endl
#define loop(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define f first
#define s second 
typedef vector<int>		vi;
typedef long long ll;

void solve() {
    int n,a[11][11];
    cin>>n;
    for(int i=1;i<=1;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=1;
        }
    }
    for(int j=1;j<=1;j++){
        for(int i=1;i<=n;i++){
            a[i][j]=1;
        }
    }
    for(int i=2;i<=n;i++){
        for(int j=2;j<=n;j++){
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    cout<<a[n][n];
  }
  
  int main() {
      ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      srand(chrono::high_resolution_clock::now().time_since_epoch().count());
  
      int t = 1;
      //cin >> t;
      while(t--) {
        solve();
      }
  
      return 0;
  }
