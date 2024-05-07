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
    ll n,a[200002];
    cin>>n;
    loop(i,n){
        cin>>a[i];
    }
    sort(a,a+n);
    ll first=count(a,a+n,a[0]);
    ll second=count(a,a+n,a[n-1]);
    ll diff=a[n-1]-a[0];
    if(first==1 and second==1){
        cout<<diff<<" "<<1;
    }
    else if(first==n){
      cout<<0<<" "<<(n*(n-1))/2;
    }
    else{
      ll mul=first*second;
      cout<<diff<<" "<<mul;
    }
}
 

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
 
  int t = 1;
 // cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}
