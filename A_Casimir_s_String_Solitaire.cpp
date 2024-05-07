#include <bits/stdc++.h>
using namespace std;
#define pys cout << "YES" << endl
#define pyn cout << "NO" << endl
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        int A = 0, b = 0, c = 0;
        cin >> a;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == 'A')
                A++;
            if (a[i] == 'B')
                b++;
            if (a[i] == 'C')
                c++;
        }
        if (c == 0)
        {
            if (A==b)
                pys;
            else
                pyn;
        }
        else
        {
            if (b == 0 || c > b)
            {
                pyn;
            }
            else
            {
                int left = b - c;
                if (A==left)
                    pys;
                else
                    pyn;
            }
        }
    }
}