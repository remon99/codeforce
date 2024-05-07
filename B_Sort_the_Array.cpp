#include <bits/stdc++.h>
using namespace std;
#define pys cout << "yes" << endl
#define pyn cout << "no" << endl
#define loop(i, n) for (int i = 0; i < n; ++i)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define nl cout << endl
typedef vector<int> vi;
typedef long long ll;

bool Issorted(int a[], int n)
{
  for (int i = 0; i < n - 1; ++i)
  {
    if (a[i] > a[i + 1])
    {
      return 0;
      break;
    }
  }
  return 1;
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());

  int n, a[100005];
  cin >> n;
  loop(i, n)
  {
    cin >> a[i];
  }
  bool flag = 1;
  int front = 0, end;
  for (int i = 0; i < n - 1; ++i)
  {
    if (a[i] > a[i + 1])
    {
      flag = 0;
      front = i;
      break;
    }
  }
  if (flag)
  {
    pys;
    cout << 1 << " " << 1;
    return 0;
  }
  end = front;
  while (end < n - 1 and a[end] > a[end + 1])
    end++;
  reverse(a + front, a + end + 1);
  if (Issorted(a, n))
  {
    pys;
    cout << ++front << " " << ++end;
  }
  else
    pyn;
}