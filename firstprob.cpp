#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a < 0 && b < 0 && c > 0 && d > 0)
        {
            cout << -1 << endl;
        }
        else if (a >= 0 && b >= 0)
        {
            cout << max(c, d) + 1 << endl;
        }
        else if (a == c && b == d)
        {
            cout << 0 << endl;
        }
        else if (a < b)
        {
            int ans = max(c, d);
            cout << ans * 2 << endl;
        }
        else if (b == c && c == d && a > b && a > c && a > d)
        {
            cout << a + 1 << endl;
        }
    }

    return 0;
}