#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a, b, c;
        cin >> a >> b >> c;
        int dif = abs(a - b);
        int k = dif * 2;
        if (k < max(a, max(c, b)))
        {
            cout << -1 << endl;
        }
        else if (k >= (c + k / 2))
        {

            cout << c + k / 2 << endl;
        }
        else if (k)
        {
            cout << c - k / 2 << endl;
            
        }
    }
    return 0;
}