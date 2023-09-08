#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n;
    cin >> n;
    int arr[2000];
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= arr[count])
        {
            count = i;
        }
    }
    cout << count << endl;
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