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
    int n,cnt=0,f=0;
    cin>>n;
    while(n!=1){
         if(n%6==0){
            n=n/6;
            cnt++;
            }
        else{
            n=n*2;
            cnt++;
            if(n%6==0) continue;
            else{
                f++;
                break;
            }
        }
    }
    if(f==1) cout<<-1<<endl;
    else cout<<cnt<<endl;
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
