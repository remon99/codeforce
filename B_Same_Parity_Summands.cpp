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
    long int n, k, x;
    int t;
    int i, j;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%ld%ld", &n, &k);
        x = n - (k - 1);
        if (x > 0 && x % 2 != 0)
        {
            printf("YES\n");
            for (j = 0; j < k - 1; j++)
            {
                printf("1 ");
            }
            printf("%ld\n", x);
            continue;
        }
        x = n - 2 * (k - 1);
        if (x > 0 && x % 2 == 0)
        {
            printf("YES\n");
            for (j = 0; j < k - 1; j++)
            {
                printf("2 ");
            }
            printf("%ld\n", x);
            continue;
        }
        printf("NO\n");
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