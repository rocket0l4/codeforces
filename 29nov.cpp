#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 1; i < n; i += 3)
        {
            if (s[i + 1] != s[i])
            {
                count = 1;
            }
        }
        if (!count)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}