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

bool istwo(ll a){
    if(a==0) return 0;
    else{
        while(a!=1){
            if(a%2!=0) return 0;
            a=a/2;
        }
        return 1;
    }
}

void solve() {
    ll n,cnt=0;
    cin>>n;
    if(n%2!=0) pys;
    else{
        istwo(n)?pyn:pys;
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
