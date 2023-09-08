#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c, d;
        cin >> c >> d;
        if (c - d == 1 || d - c == 1)
        {
            cout << -1 << endl;
        }
        else if (c - d == 2 || d - c == 2)
        {
            cout << 2 << endl;
        }
        else if (c == 0 && d == 0)
        {
            cout << 0 << endl;
        }
        else if (c == d)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}