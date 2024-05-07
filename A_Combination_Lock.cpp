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
    int n,cnt=0;
    string s,d;
    cin>>n>>s>>d;
    loop(i,n){
        int a=s[i]-48;
        int b=d[i]-48;
        int sum=abs(a-b);
        if(sum>5) sum=10-sum;
        cnt+=sum;
    }  
    cout<<cnt;  
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
