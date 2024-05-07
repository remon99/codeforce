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
  int n,m,cnt=0,index;
  cin>>n>>m;
  int a[n];
  loop(i,n){
    cin>>a[i];
  }
  while(true){
    loop(i,n){
      if(a[i]<=m) cnt++;
    }
    if(cnt==n){
      loop(i,n){
        if(a[i]!=0) index=i;
      }
      break;
    }
    cnt=0;
    loop(i,n){
      if(a[i]>m) a[i]-=m;
      else{
        a[i]=0;
      }
    }
    
  }
  cout<<index+1;
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
