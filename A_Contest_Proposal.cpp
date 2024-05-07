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
    int n;
    cin>>n;
    int a[n],b[n];
    loop(i,n){
        cin>>a[i];
    }
    loop(i,n){
        cin>>b[i];
    }
    int i=0,j=0,ans=0;
    while(j<n){
        if(a[i]>b[j]){
            ans++;
            j++;
        }
        else {
            i++;
            j++;
        }
    }
    cout<<ans<<endl;
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
