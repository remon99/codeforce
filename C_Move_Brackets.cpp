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
    int n,cnt1=0;
    string s;
    stack<char>st;
    cin>>n>>s;
    loop(i,s.size()){
      if(cnt1==0){
        if(s[i]==')') continue;
        else{
          st.push(s[i]);
          cnt1++;
        }
      }
      else{
        if(s[i]==')'){
          st.pop();
          cnt1--;
        }
        else{
          st.push(s[i]);
          cnt1++;
        }
      }
    }
    cout<<st.size();
    nl;
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
 