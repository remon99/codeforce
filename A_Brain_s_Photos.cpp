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
    int n,m,cnt=0;
    char photo[102][102];
    cin>>n>>m;
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cin>>photo[i][j];
       }
   }
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           if(photo[i][j]=='W' || photo[i][j]=='B' || photo[i][j]=='G'){
               cnt++;
           }
       }
   }
   
   if(cnt==n*m) cout<<"#Black&White";
   else cout<<"#Color";
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
