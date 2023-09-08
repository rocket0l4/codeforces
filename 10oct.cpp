#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (k == 1)
        {
            cout << (n - 1) / 2 << endl;
            continue;
        }
        for (int i = 1; i < n - 1; i++)
            if (arr[i] > (arr[i - 1] + arr[i + 1]))
            {
                count += 1;
            }
        cout << count << endl;
    }
    return 0;
}