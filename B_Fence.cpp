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
    int n,k,a[150002],cnt=0,h,temp;
    vi v;
    cin>>n>>k;
    loop(i,n){
        cin>>a[i];
    }
    for(int i=0;i<k;i++){
      cnt+=a[i];
    }
    if(n==1) cout<<1;
    else{
      h=cnt;
      temp=1;
      for(int i=1;i<=n-k;++i){
      cnt-=a[i-1];
      cnt+=a[i+(k-1)];
      if(cnt<h){
        h=cnt;
        temp=i+1;
      }
      }
      cout<<temp;
    }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
 
  int t = 1;
  //cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}