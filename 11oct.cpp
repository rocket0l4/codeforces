#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            count += arr[i];
        }

        if (count < m)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (count - m) << endl;
        }
    }
    return 0;
}