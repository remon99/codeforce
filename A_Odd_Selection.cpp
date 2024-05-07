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
    int x,a,n;
    int even = 0,odd = 0;
        cin>>n>>x;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a % 2 == 1)odd++;
            else even++;
        }
        int m = min(even,x-1);
        int d = x - m;

        if(d % 2 == 0){
            d++;
        }
        if(odd >= d && d <= x)cout<<"Yes\n";
        else cout<<"No\n";
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