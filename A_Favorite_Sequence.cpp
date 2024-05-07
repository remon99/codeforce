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
    int n,a[302];
    cin>>n;
    loop(i,n){
        cin>>a[i];
    }
    int right=0,left=n-1;
    if(n%2==0){
        loop(i,(n)/2){
            cout<<a[right]<<" "<<a[left]<<" ";
            right++;
            left--;
        }
    }
    else{
        loop(i,n/2){
            cout<<a[right]<<" "<<a[left]<<" ";
            right++;
            left--;
        }
        cout<<a[(n/2)];
    }
    nl;
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
