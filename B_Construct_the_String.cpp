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
    int a,b,n;
    cin>>n>>a>>b;
    std::string str="abcdefghijklmnopqrstuvwxyz";
    std::string str2 = str.substr (0,b);
     if(a==b){
        if(n<=26){
            std::string str2 = str.substr (0,n);
            cout<<str2<<endl;
        }
        else{
            std::string str2 = str.substr (0,b);
        for(int i=0;i<n/b;i++){
            cout<<str2;
        }
        for(int i=0;i<n%b;i++){
            cout<<str2[i];
        }
        cout<<endl;
        }
    } 
    else if(n%b==0){
        for(int i=0;i<n/b;i++){
            cout<<str2;
        }
        cout<<endl;
    }
   
    else{
        for(int i=0;i<n/b;i++){
            cout<<str2;
        }
        for(int i=0;i<n%b;i++){
            cout<<str2[i];
        }
        cout<<endl;
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