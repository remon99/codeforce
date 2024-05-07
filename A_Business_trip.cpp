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
    int n, a[13], cnt = 0, sum = 0;
    cin >> n;
    if (n == 0)
        cout << 0;
    else
    {

        loop(i, 12)
        {
            cin >> a[i];
        }
        sort(a, a + 12, greater<int>());
        loop(i, 12)
        {
            sum += a[i];
            cnt++;
            if (sum < n)
                continue;
            else
                break;
        }
        if (sum < n)
            cout << -1;
        else
            cout << cnt;
    }
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