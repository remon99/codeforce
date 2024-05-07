#include<bits/stdc++.h>
using namespace std;
#define pys cout<<"YES"<<endl
#define pyn cout<<"NO"<<endl
#define loop(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
//#define f first
//#define s second 
typedef vector<int>		vi;
typedef long long ll;

void solve() {
    ll m,s;
    vi v;
    vi w;
    cin>>m>>s;
    if(m==1 && s<=9) cout<<s<<" "<<s;
    else if(s==0 || s>m*9) cout<<-1<<" "<<-1;
    else{
        int n=m,f=s;
        while(f!=0){
          if(f>9){
            w.pb(9);
            f-=9;
            n=n-1;
          }
          else{
              if(n==1){
                w.pb(f);
                for(int i=w.size()-1;i>=0;i--){
                 cout<<w[i];
               }
                break;
                
              }
              else if(n==2){
                w.pb(f-1);
                w.pb(1);
               for(int i=w.size()-1;i>=0;i--){
                 cout<<w[i];
               }
                break;
              }
              else{
                w.pb(f-1);
                n-=2;
                while(n--){
                  w.pb(0);
                }
                w.pb(1);
                for(int i=w.size()-1;i>=0;i--){
                 cout<<w[i];
               }
                break;
              }
          }
        }



      cout<<" ";

        
        while(s!=0){
          if(s>9){
            v.pb(9);
            s-=9;
          }
          else{
            v.pb(s);
            s-=s;
          }
        }
        if(m>v.size()){
          m-=v.size();
          while(m--){
            v.pb(0);
          }
        }
        loop(i,v.size()){
          cout<<v[i];
        }
    }
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
