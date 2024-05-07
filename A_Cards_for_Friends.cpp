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
    int a,b,n,cnt=0;
    cin>>a>>b>>n;
    if(n==1) pys;
    else if(a%2!=0 and b%2!=0) pyn;
    else{
        if(a%2==0 and b%2==0){
            int div=a*b;
            while(true){
                if(div%2==0){
                    div=div/2;
                    cnt++;
                    continue;
                }
                else break;
            }
            if(pow(2,cnt)>=n) pys;
            else pyn;
        }
        else if(a%2==0){
            while(true){
                if(a%2==0){
                    a=a/2;
                    cnt++;
                    continue;
                }
                else break;
            }
            if(pow(2,cnt)>=n) pys;
            else pyn;
        }
        else if(b%2==0){
            while(true){
                if(b%2==0){
                    b=b/2;
                    cnt++;
                    continue;
                }
                else break;
            }
            if(pow(2,cnt)>=n) pys;
            else pyn;
        }
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
