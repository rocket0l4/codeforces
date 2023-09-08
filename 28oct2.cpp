#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        int ans = 0;
        bool sol = true;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
                count += 1;
            else
                ans += 1;
            if (ans > count)
            {
                sol = false;
                break;
            }
        }
        if (!sol)
            cout << "NO" << endl;
        else if (s[0] == 'B')
            cout << "NO" << endl;
        else if (s[n - 1] != 'B')
            cout << "NO" << endl;
        else if (ans > count)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}