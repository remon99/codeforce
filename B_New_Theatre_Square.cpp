#include<bits/stdc++.h>
using namespace std;
#define pys cout<<"YES"<<endl
#define pyn cout<<"NO"<<endl
#define loop(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define nl cout<<endl 
typedef vector<int> vi;
typedef long long ll;

void solve(){
  int n,m,x,y,ans=0;
  cin>>n>>m>>x>>y;
  y=min(y,2*x);
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    for(int j=0;j<m;j++){
      if(s[j]=='.'){
        if(j<m and s[j+1]=='.') ans+=y,j++;
        else ans+=x;
      }
    }
  }
  cout<<ans<<endl;
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
