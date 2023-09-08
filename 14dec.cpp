#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long count = INT_MIN, n;
        cin >> n;
        int arr[n+1];
        for (int i = 0; i < n; i++)
        cin >> arr[i];
        for (int i = 0; i < n - 1; i++)
        {
            count = max(count, arr[i], arr[i + 1]);
        }
        cout << count << endl;
    }
    return 0;
}