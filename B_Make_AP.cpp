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
  int a,b,c;
  cin>>a>>b>>c;
  int new_a=b+(b-c);
  if(new_a>=a and new_a%a==0){
    pys;
    return;
  }
  int new_b=a+(c-a)/2;
  if(new_b>=b and new_b%b==0 and (c-a)%2==0){
    pys;
    return;
  }
  int new_c=a+2*(b-a);
  if(new_c>=c and new_c%c==0){
    pys;
    return;
  }
  pyn;
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
