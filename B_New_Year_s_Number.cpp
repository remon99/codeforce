#include<bits/stdc++.h>
using namespace std;
#define pys cout<<"YES"<<endl
#define pyn cout<<"NO"<<endl
#define loop(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define fi first
#define nl cout<<endl
#define se second 
typedef vector<int>		vi;
typedef long long ll;

void solve(){
    int n,cnt=0;
    cin>>n;
    if(n%2020==0 || n%2021==0) pys;
    else{
        while(n>=0){
            if(n%2021!=0){
                n-=2020;
            }
            else{
                cnt++;
                break;
            }
        }
        cnt==1?pys:pyn;
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
 