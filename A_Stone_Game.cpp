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
    int n,a[102],lo ,hi;
    cin>>n;
    loop(i,n){
        cin>>a[i];
        if(a[i]==1)lo=i+1;
        if(a[i]==n) hi=i+1; 
    }
    if(lo>hi) swap(lo,hi);
    int sum1=max(lo,hi);
    int sum2=n-min(lo,hi)+1;
    int sum3=lo+n-(max(hi,lo))+1;
    cout<<min(sum1,min(sum2,sum3));
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