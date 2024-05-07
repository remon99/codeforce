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
    int n,m;
    vector<ll>v;
    ll sum=0;
    string s;
    cin>>n>>m>>s;
    loop(i,n){
        int q=s[i]-97+1;
        sum+=q;
        v.pb(sum);
    }
    while(m--){
        int x,y;
        cin>>x>>y;
        if(x==1){
            cout<<v[y-1];
        }
        else{
            ll ans=v[y-1]-v[x-2];
            cout<<ans;
        }
        
        nl;
    }
   
}
    
 

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
 
  int t = 1;
  //cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}