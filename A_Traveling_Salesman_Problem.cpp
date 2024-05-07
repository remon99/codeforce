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
  int n,a=0,b=0,c=0,d=0,cnt=0;
  cin>>n;
  while(n--){
    int t,w;
    cin>>t>>w;
    if(t==0){
        if(w>0){
           a=max(w,a);
        }
        else c=min(w,c);
    }
    else{
        
        if(t>0){
           b=max(t,b);
        }
        else d=min(t,d);
    }
  }
 // cout<<a<<b<<c<<d;
  cnt=abs(a)+abs(b)+abs(c)+abs(d);
  cout<<cnt*2<<endl;
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
