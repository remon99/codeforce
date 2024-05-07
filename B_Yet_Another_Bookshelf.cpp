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
    int n,a[55], cnt0 = 0,cnt=0,q=0;
    vi v;
    cin >> n;
    loop(i, n)
    {
        cin>>a[i];
    }
    loop(i,n){
        if(a[i]==0) cnt++;
        else break;
    }
    for(int i=n-1;i>=0;--i){
        if(a[i]==0) q++;
        else break;
    }
    for(int i=cnt;i<n-q;++i){
        v.pb(a[i]);
    }
    for(auto it : v){
        if(it==0) cnt0++;
    }
    cout<<cnt0<<endl;
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