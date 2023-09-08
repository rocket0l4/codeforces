#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[20005] = {0};
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            int ans;
            cin >> ans;
            if (arr[ans] == 0)
            {
                arr[ans] = 1;
                continue;
            }
            else
            {
                count += 1;
            }
        }
        if (count % 2 != 0)
            cout << n - count - 1 << endl;
        else
            cout << n - count << endl;
    }
    return 0;
}