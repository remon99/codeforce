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
  string s;
  cin>>s;
  string q="QAQ";
  int a=s.size()+1;
  int dp[a][4];
  for(int i=0;i<a;++i){
      for(int j=0;j<4;++j){
          if(i==0) dp[i][j]=0;
          if(j==0) dp[i][j]=1;
      }
  }
  for(int i=1;i<a;++i){
      for(int j=1;j<4;++j){
          if(s[i-1]==q[j-1]) dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
          else dp[i][j]=dp[i-1][j];
      }
  }
  cout<<dp[a-1][4-1];
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
