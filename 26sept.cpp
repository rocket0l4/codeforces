#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(2 * n);
        int b = 2 * n;
        int count = 1;
        for (int i = 0; i < b; i++)

            cin >> a[i];
        sort(a.begin(), a.end());
        for (int i = n; i < b; i++)
        {
            if (a[i] - a[i - n] < x)
            {
                count = 0;
                break;
            }
        }

        if (count != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}