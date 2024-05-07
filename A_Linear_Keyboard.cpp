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
    string s, d;
    int res = 0;
    int a[51];
    cin >> s >> d;
    if (d.size() == 1)
        cout << 0 << endl;
    else
    {
        for (int i = 0; i < d.size(); ++i)
        {
            for (int j = 0; j < s.size(); ++j)
            {
                if (d[i] == s[j])
                    a[i] = j + 1;
            }
        }
        for (int i = 0; i < d.size() - 1; ++i)
        {
            res += abs(a[i + 1] - a[i]);
        }
        cout << res << endl;
    }
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
