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
  long long n;
  cin>>n;
  long long a[n];
  loop(i,n){
    cin>>a[i];
  }
  cout<<abs(a[0]-a[1])<<" "<<abs(a[0]-a[n-1])<<endl;
  for(int i=1;i<n-1;i++){
    cout<<min(abs(a[i]-a[i-1]),abs(a[i]-a[i+1]));
    cout<<" "<<max(abs(a[i]-a[0]),abs(a[i]-a[n-1]))<<endl;
  }
  cout<<abs(a[n-1]-a[n-2])<<" "<<abs(a[n-1]-a[0])<<endl;
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
