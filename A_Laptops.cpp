#include<bits/stdc++.h>
using namespace std;
#define pys cout<<"YES"<<endl
#define pyn cout<<"NO"<<endl
#define loop(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define nl cout<<endl 
typedef vector<int>		vi;
typedef long long ll;

void solve(){
    int n,cnt=0;
    cin>>n;
    vector<pair<int,int>>v;
    loop(i,n){
        int x,y;
        cin>>x>>y;
        v.pb(make_pair(x,y));
    }
    sort(v.begin(), v.end()); 
    loop(i,v.size()-1){
        if(v[i].second<v[i+1].second) cnt++;
    }
    (cnt>=n-1)?cout<<"Poor Alex":cout<<"Happy Alex";
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
