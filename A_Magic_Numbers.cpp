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
  int cnt=0;
  string s;
  cin>>s;
  if(s[0]=='4'){
    pyn;
    return;
  }
  if(s.size()<=2){
    if(s.size()==1){
        if(s[0]=='1') pys;
        else pyn;
    }
    if(s.size()==2){
        if(s=="11" || s=="14") pys;
        else pyn;
    }
    return;
  }
  for(int i=0;i<s.size()-1;++i){
    if(s[i]!='1' and s[i]!='4'){
      pyn;
      return;
    }
  }
  for(int i=0;i<s.size()-2;++i){
    if(s[i]=='4'){
        if(s[i+1]=='4' and s[i+2]=='4') cnt++;
    }
  }
  (cnt)?pyn:pys;
  
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
