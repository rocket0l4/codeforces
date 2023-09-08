#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n;
    int sum = 0;
    cin >> n;
    int arr[2000];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        sum = max(sum, arr[i] - arr[1]);
        sum = max(sum, arr[n] - arr[i]);
        sum = max(sum, arr[i] - arr[i % n + 1]);
    }
    cout << sum << endl;
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