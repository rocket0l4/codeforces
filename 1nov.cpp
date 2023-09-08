#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 1; i <= n; ++i)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= n; ++i)
        {
            count += (arr[i] - 1) / (2 * arr[1] - 1);
        }
        cout << count << endl;
    }
    return 0;
}