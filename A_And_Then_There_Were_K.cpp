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
    int n,x;
    cin>>n;
    for(int i=1;i<=32;i++){
      if(pow(2,i)<=n) continue;
      else{
        x=i-1;
        break;
      }
    }
    ll sum=pow(2,x)-1;
    cout<<sum<<endl;
  }
  
  int main() {
      ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      srand(chrono::high_resolution_clock::now().time_since_epoch().count());
  
      int t = 1;
      cin >> t;
      while(t--) {
        solve();
      }
  
      return 0;
  }
