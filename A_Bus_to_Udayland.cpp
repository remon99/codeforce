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
    int n, cnt = 0;
    cin >> n;
    string w = "++";
    vector<string> v;
    loop(i, n)
    {
        string s;
        cin >> s;
        if (cnt == 0)
        {
            for (int j = 0; j < s.size() - 1; ++j)
            {
                if (s[j] == 'O' && s[j + 1] == 'O')
                {
                    cnt++;
                    s.replace(j, 2, w, 0, 2);
                    break;
                }
            }
        }
        v.pb(s);
    }
    if (cnt == 0)
        pyn;
    else
    {
        pys;
        loop(i, v.size())
        {
            cout << v[i] << endl;
        }
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
