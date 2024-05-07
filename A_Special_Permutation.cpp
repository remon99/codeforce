#include<bits/stdc++.h>
using namespace std;
#define pys cout<<"YES"<<endl
#define pyn cout<<"NO"<<endl
#define loop(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define pb push_back
#define nl cout<<endl
#define mp make_pair
#define f first
#define s second 
typedef vector<int>		vi;
typedef long long ll;

void solve() {
    int n;
    cin>>n;
    if(n%2==0){
        for(int i=n;i>0;i--){
        cout<<i<<" ";
    }
    nl;
    }
    else{
        for(int i=2;i>0;i--){
        cout<<i<<" ";
        }
        for(int i=n;i>mid;i--){
        cout<<i<<" ";
        }
        nl;
    }
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
