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
    ll n,m,x,y;
    cin>>n>>m>>x>>y;
    int a=abs(x-1)+(y-1);
    int b=abs(x-1)+(y-m);
    int c=abs(x-n)+(y-1);
    int d=abs(x-n)+(y-m);
    int q=max(a,max(b,max(c,d)));
    if(q==a){
        cout<<1<<" "<<1<<" "<<n<<" "<<m;
    }
    else if(q==b){
        cout<<1<<" "<<m<<" "<<n<<" "<<1;
    }
    else if(q==c){
        cout<<n<<" "<<1<<" "<<1<<" "<<m;
    }
    else cout<<n<<" "<<m<<" "<<1<<" "<<1;
    nl;
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