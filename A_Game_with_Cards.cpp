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
    int Alice[51], Bob[51];
    int n,q;
    cin >> n;
    loop(i, n)
    {
        cin >> Alice[i];
    }
    sort(Alice, Alice + n, greater<int>());
    cin >> q;
    loop(i, q)
    {
        cin >> Bob[i];
    }
    sort(Bob, Bob + q, greater<int>());
    if(Alice[0]==Bob[0]) {
        cout << "Alice" << endl;
        cout << "Bob"<<endl;
        }
    else if(Alice[0]>Bob[0]){
        cout<<"Alice"<<endl<<"Alice"<<endl;
    }
    else{
        cout<<"Bob"<<endl<<"Bob"<<endl;
    }
}

int main(){
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
