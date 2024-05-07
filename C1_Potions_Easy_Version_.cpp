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
    int a[2002],n;
    ll sum=0;
    int cnt=0;
    cin>>n;
    loop(i,n){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    loop(i,n){
        sum=sum+a[i];
        if(sum>=0) cnt++;
        else break;
    }
    cout<<cnt;
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
