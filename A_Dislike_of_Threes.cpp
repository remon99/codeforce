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

int res[1001];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int k = 0;
    loop(i, 2000)
    {
        if (i % 3 == 0 || i % 10 == 3)
            continue;
        else
        {
            res[k] = i ;
            k++;
        }
    }
    int n;
    cin >> n;
    loop(i, n)
    {
        int x;
        cin >> x;
        cout << res[x-1];
        nl;
    }
}