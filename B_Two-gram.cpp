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

int n;
string s;

int chk(string sub){
    int cnt=0;
    loop(i,n-1){
        if(s[i]==sub[0] && s[i+1]==sub[1]) cnt++;
    }
    return cnt;
}

void solve(){
    int maxx=0;
    string gram;
    cin>>n>>s;
    loop(i,n-1){
        string sub=s.substr(i,2);
        int temp=chk(sub);
        if(temp>maxx){
            maxx=temp;
            gram=sub;
        }
    }
    cout<<gram<<endl;
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
