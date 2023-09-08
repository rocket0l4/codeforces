#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int ans = 0, a = 0, b = 0, w = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
        {
            a++;
        }
        else
        {
            b++;
        }
    }

    if (b > a)
    {
        w += b - n / 2;
        b = n / 2;
        a = n - b;
    }
    if (b % 2)
    {
        w++;
        cout << w << endl;
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}