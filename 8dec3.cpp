#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, k;
    cin >> t;
    while (t--)
    {
        cin >> k;
        int n = floor(sqrt(k));
        k -= n * n;
        if (k == 0)
            cout << n << " " << 1 <<endl;
        else if (k <= n + 1)
            cout << k << " " << n + 1 <<endl;
        else
            cout << n + 1 << " " << 2 * n + 2 - k <<endl;
    }
    return 0;
}
