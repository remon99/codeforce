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
    int n, temp, cnt = 0, w;
    vi v, q;
    cin >> n;
    loop(i, n)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
    loop(i, n)
    {
        if (v[i] == v[i + 1])
        {
            temp = v[i];
            w = i;
            cnt++;
            break;
        }
        else
            q.pb(v[i]);
    }
    if (cnt)
    {
        for (int i = w + 2; i < v.size(); ++i)
        {
            q.pb(v[i]);
        }
    }
    if (n == 2)
    {
        cout << v[0] << " " << v[1];
    }
    else if (n == 3)
    {
        if (cnt)
        {
            cout << temp << " " << q[0] << " " << temp;
        }
        else
            cout << v[0] << " " << v[2] << " " << v[1];
    }
    else
    {
        if (cnt)
        {
            cout << temp<<" ";
            int left = 0, right = q.size() - 1;
            while (n--)
            {
                cout<<q[right]<<" ";
                right--;
                if(abs(right-left)==1) break;
                cout<<q[left]<<" ";
                left++;
                if(abs(right-left)==1) break;
            }
            cout << temp;
        }
        else
        {
            cout << q[0]<<" ";
            int left = 2, right = q.size() - 1;
            while (n--)
            {
                cout << q[right]<<" ";
                right--;
                if (abs(right - left) == 1)
                    break;
                cout << q[left]<<" ";
                left++;
                if (abs(right - left) == 1)
                    break;
            }
            cout << q[1];
        }
        nl;
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