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
    int n, cntl = 0, cntr = 0;
    string s;
    cin >> n >> s;
    loop(i, n)
    {
        if (s[i] == 'L')
            cntl++;
        else
            cntr++;
    }
    ll ans = cntl + cntr + 1;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}