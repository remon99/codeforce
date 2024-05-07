#include<bits/stdc++.h>
using namespace std;
#define pys cout<<"YES"<<endl
#define pyn cout<<"NO"<<endl
#define loop(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define nl cout<<endl 
typedef vector<int>		vi;
typedef long long ll;

void solve(){
    int n,cnt1,cnt2;
    vector<string>v;
    cin>>n;
    if(n==1){
        string s;
        cin>>s;
        cout<<s;
    }
    else{
        loop(i,n){
        string s;
        cin>>s;
        v.push_back(s);
        }
        sort(v.begin(),v.end());
        cnt1=count(v.begin(),v.end(),v[0]);
        cnt2=count(v.begin(),v.end(),v[v.size()-1]);
        if(cnt1>cnt2) cout<<v[0];
        else cout<<v[v.size()-1];
    }
    
}
 

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
 
  int t = 1;
  //cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}
