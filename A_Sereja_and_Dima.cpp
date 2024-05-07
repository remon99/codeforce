#include<bits/stdc++.h>
using namespace std;
#define pys cout<<"YES"<<endl
#define pyn cout<<"NO"<<endl
#define loop(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define f first
#define nl cout<<endl
#define s second 
typedef vector<int>		vi;
typedef long long ll;

void solve() {
    int n,a[1002],sereja=0,dima=0;
    cin>>n;
    loop(i,n){
        cin>>a[i];
    }
    int right=0,left=n-1,turn=0;
    while(turn!=n){
        if(turn%2==0){
            if(a[right]>=a[left]){
                sereja+=a[right];
                right++;
                turn++;
            }
            else{
                sereja+=a[left];
                left--;
                turn++;
            }
        }
        else{
            if(a[right]>=a[left]){
                dima+=a[right];
                right++;
                turn++;
            }
            else{
                dima+=a[left];
                left--;
                turn++;
            }
        }
    }
    cout<<sereja<<" "<<dima;
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
