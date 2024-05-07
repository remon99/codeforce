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
    int n,a[200002]={0},temp;
    vi v;
    cin>>n;
    loop(i,n){
        int x;
        cin>>x;
        v.pb(x);
        a[x]++;
    }
    bool flag=false;
    for(int i=1;i<=n;++i){
        if(a[i]==1) {
            flag=true;
            temp=i;
            break;
        }
    }
    if (flag){
        loop(i,n){
            if(v[i]==temp) {
                cout<<i+1;
                break;
            }
        }
    }
    else cout<<-1;
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