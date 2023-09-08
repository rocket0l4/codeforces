#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == b && b == c)
        {
            cout << 1 << " " << 1 << " " << 1 << endl;
        }
        else
        {
            if (a <= max(b, c))
                cout << abs(a - max(b, c)) + 1 << " ";
            else
                cout << 0 << " ";
            if (b <= max(a, c))
                cout << abs(b - max(a, c)) + 1 << " ";
            else
                cout << 0 << " ";
            if (c <= max(a, b))
                cout << abs(c - max(a, b)) + 1 << endl;
            else
                cout << 0 << endl;
        }
    }
    return 0;
}