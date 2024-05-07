#include<bits/stdc++.h>
using namespace std;
#define pys cout<<"YES"<<endl
#define pyn cout<<"NO"<<endl
#define loop(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define nl cout<<endl 
typedef vector<int>		vi;
typedef long long ll;

void solve(){
    int n;
    cin>>n;
    if(n%2){
        cout<<3<<" "<<1<<" "<<2<<" ";
        if(n>3){
            for(int i=4;i<=n;++i){
                if(i%2) cout<<i-1<<" ";
                else cout<<i+1<<" ";
            }
        }
    }
    else{
        for(int i=1;i<=n;++i){
            if(i%2) cout<<i+1<<" ";
                else cout<<i-1<<" ";
        }
    }
    nl;
}
 

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
 
  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}