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
    int a,b,cnt=0;
    cin>>a>>b;
    int m=max(a,b);
    for(int i=m;i<=6;i++){
        if(i<=6) cnt++;
    }
    if(cnt==6) cout<<"1/1";
    else if(cnt==5) cout<<"5/6";
    else if(cnt==4) cout<<"2/3";
    else if(cnt==3) cout<<"1/2";
    else if(cnt==2) cout<<"1/3";
    else if(cnt==1) cout<<"1/6";
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
