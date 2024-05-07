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
    int a,b,n;
    cin>>a>>b>>n;
    while(true){
        int q=__gcd(a,n);
        //cout<<a<<endl;
        n-=q;
        if(n<__gcd(b,n)){
            cout<<0;
            break;
        }
        int w=__gcd(b,n);
        //cout<<b<<endl;
        n-=w;
        if(n<__gcd(a,n)){
            cout<<1;
            break;
        }
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