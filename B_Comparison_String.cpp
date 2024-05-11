#include <bits/stdc++.h>
using namespace std;
#define pys cout << "YES" << endl
#define pyn cout << "NO" << endl
#define loop(i, n) for (int i = 0; i < n; ++i)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define nl cout << endl
typedef vector<int> vi;
typedef long long ll;
 
void solve()
{
    int n;
    string s;
    cin>>n>>s;
    int cnt=0,ans=0;
    char c=s[0];
    loop(i,n){
        if(c==s[i]){
            cnt++;
        }
        else{
            ans=max(cnt,ans);
            c=s[i];
            cnt=1;
        }
    }
     ans=max(cnt,ans);
    cout<<ans+1<<endl;
}
 
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
 
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
