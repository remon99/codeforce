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
  ll x,y,a,b,sum;
  cin>>x>>y>>a>>b;
  if(2*a>b){
    if(x>y) swap(x,y);
    if(x==y){
        sum=x*b;
        cout<<sum<<endl;
    }
    else{
        sum=x*b+(y-x)*a;
        cout<<sum<<endl;
    }
  }
  else{
    sum=(x+y)*a;
    cout<<sum<<endl;
  }
  
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
 
  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}