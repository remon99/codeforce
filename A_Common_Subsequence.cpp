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
    int n,m,a[1002],cnt=0;
    set<int>s;
    cin>>n>>m;
    loop(i,n){
        int x;
        cin>>x;
        s.insert(x);
    }
    loop(i,m){
        cin>>a[i];
    }
    loop(i,m){
        auto it=s.find(a[i]);
        if(it==s.end()) continue;
        else{
            cnt++;
            pys;
            cout<<1<<" "<<*it;
            nl;
            break;
        }
    }
    if(cnt==0)  pyn;
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