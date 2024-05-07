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
   ll a,b,total=0,cnt=0;
   cin>>a>>b;
   total+=b;
   while(a--){
     char c;
     int n;
     cin>>c>>n;
     if(c=='+') total+=n;
     else{
       if(n<=total) total-=n;
       else cnt++;
     }
   }
   cout<<total<<" "<<cnt;
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
