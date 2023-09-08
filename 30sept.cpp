#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        int count = 0, arr[110];
        int v;
        for (int i = 0; i < 105; i++)

            arr[i] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> v;
            arr[v]++;
        }
        for (int i = 0; i < 105; i++)
            count += min(c, arr[i]);
        cout << count << endl;
    }

    return 0;
}