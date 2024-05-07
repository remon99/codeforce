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
    vector<int>v;
    int n,h,m;
    cin>>n>>h>>m;
    loop(i,n){
        int x,y;
        cin>>x>>y;
        int res=60*(x-h)+(y-m);
        if(res<0) {
            int a=24*60+ res;
            v.push_back(a);
        }
       else  v.push_back(res);
    }
    sort(v.begin(),v.end());
    cout<<v[0]/60<<" "<<v[0]%60<<endl;
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
