#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0, ans = 0, val = 0, sol = 0;
        cin >> n;
        int arr[101];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i % 2 == 0)
            {
                if (arr[i] % 2 == 0)
                {
                    count += 1;
                }
                else
                {
                    ans += 1;
                }
            }
            else
            {
                if (arr[i] % 2 == 0)
                {
                    sol += 1;
                }
                else
                {
                    val += 1;
                }
            }
        }
        if ((sol && val) || (count && ans))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}