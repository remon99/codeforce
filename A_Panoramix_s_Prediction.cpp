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
    vi v;
    cin>>n>>m;
    for(int i=2;i<=50;++i){
        int flag=1;
        for(int j=2;j<=i/2;++j){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag) v.pb(i);
    }
    auto it=std::find(v.begin(),v.end(),n);
    it++;
    if(*it==m) pys;
    else pyn;
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