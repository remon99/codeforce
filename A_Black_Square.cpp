#include<bits/stdc++.h>
using namespace std;
#define pys cout<<"YES"<<endl
#define pyn cout<<"NO"<<endl
#define loop(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define f first
#define s second 
typedef vector<int>		vi;
typedef long long ll;

void solve() {
    int a,b,c,d;
    ll sum=0;
    string s ;
    cin>>a>>b>>c>>d>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') sum+=a;
        if(s[i]=='2') sum+=b;
        if(s[i]=='3') sum+=c;
        if(s[i]=='4') sum+=d;
    }
    cout<<sum;
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
