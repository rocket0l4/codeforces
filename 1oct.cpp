#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, count = 0;
        cin >> n >> m;
        string s1, s2;
        for (int i = 1; i <= n; i++)
            cin >> s1[i];
        for (int i = 1; i <= m; i++)
            cin >> s2[i];
        while (m >= 2)
        {
            if (s1[n] != s2[m])
            {
                cout << "NO" << endl;
                return;
            }
            n--;
            m--;
        }
        for (int i = 1; i <= n; i++)
        {
            if (s1[i] == s2[1])
            {
                count = 1;
            }
        }
        if (count == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}