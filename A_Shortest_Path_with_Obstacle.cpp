#include<bits/stdc++.h>
using namespace std;
#define pys cout<<"YES"<<endl
#define pyn cout<<"NO"<<endl
#define loop(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define nl cout<<endl 
typedef vector<int>vi;
typedef long long ll;
 
void solve(){
 int a[6];
 for(int i=0;i<6;++i){
     cin>>a[i];
 }   
 if(a[0]==a[2] && a[2]==a[4]){
   if((a[5]>a[1] && a[5]<a[3]) || (a[5]<a[1] && a[5]>a[3]))
   cout<<abs(a[0]-a[2])+abs(a[1]-a[3])+2;
   else cout<<abs(a[0]-a[2])+abs(a[1]-a[3]);
 }
 else if(a[1]==a[3] && a[3]==a[5]){
   if((a[4]>a[0] && a[4]<a[2]) || (a[4]<a[0] && a[4]>a[2]))
   cout<<abs(a[0]-a[2])+abs(a[1]-a[3])+2;
   else cout<<abs(a[0]-a[2])+abs(a[1]-a[3]);
 }
 else cout<<abs(a[0]-a[2])+abs(a[1]-a[3]);
 nl;
}
 
 
int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
 
  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  }
}