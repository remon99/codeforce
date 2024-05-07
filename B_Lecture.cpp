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
    vector<string>v;
    unordered_map<string,string>map;
    cin>>n>>m;
    loop(i,m){
        string a,s;
        cin>>a>>s;
        map.insert(mp(a,s));
    }
    loop(i,n){
        string a;
        cin>>a;
        auto it=map.find(a);
        if((*it).first.size()<=(*it).second.size()) v.pb((*it).first);
        else v.pb((*it).second);   
    }
    loop(i,v.size()){
        cout<<v[i]<<" ";
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