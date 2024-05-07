#include <bits/stdc++.h>
using namespace std;
#define pys cout << "YES" << endl
#define pyn cout << "NO" << endl
#define loop(i, n) for (int i = 0; i < n; i++)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define f first
#define s second
typedef vector<int> vi;
typedef long long ll;

void solve()
{
    int n, m, a[102], b[102], cnt = 0;
    cin >> n;
    loop(i, n)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cin >> m;
    loop(j, m)
    {
        cin >> b[j];
    }
    sort(b, b + m);
    int up = 0, down = 0;
    for (int i = 0; true; ++i)
    {

        if (a[up] <= b[down])
        {
            if (b[down] - a[up] == 0 || b[down] - a[up] == 1)
            {
                up++;
                down++;
                cnt++;
            }
            else
            {
                up++;
            }
            if (up == n || down == m)
                break;
        }

        else if (a[up] > b[down])
        {
            if (a[up] - b[down] == 0 || a[up] - b[down] == 1)
            {
                up++;
                down++;
                cnt++;
            }
            else
                down++;
            if (up == n || down == m)
                break;
        }
    }
    cout << cnt;
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
