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
    vector<int>v;
    int n;
    string s;
    cin>>n>>s;
    if(s[0]=='9'){
        int c=0;
        for(int i=n-1;i>=0;i--){
            int x=s[i]-'0';
            x+=c;
            if(x>1){
                v.push_back(11-x);
                c=1;
            }
            else {
                c=0;
                v.push_back(1-x);
            }
        }
        reverse(v.begin(),v.end());
        for(auto it : v){
            cout<<it;
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            cout<<57-s[i];
        }
    }
    cout<<endl;
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
