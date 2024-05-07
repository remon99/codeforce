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

int w[200001];

void solve(){
    int n,cnt=0;
    unordered_set<int>s;
    cin>>n;
    int a[n];
    loop(i,n) cin>>a[i];
    s.insert(a[n-1]);
    cnt++;
    for(int i=n-2;i>=0;--i){
        if(s.find(a[i])==s.end()){
            s.insert(a[i]);
            cnt++;
        }
        else break;
    }
    cout<<n-cnt<<endl;
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
