#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 1;
        int ans = 1;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        for (int i = 1; i < n; i++)
        {

            if (arr[i - 1] == arr[i])
            ans++;
            else
            {
                if (ans>count)
                count = ans;
                ans = 1;
            }
        }
        if (ans > count)
            count = ans;
        cout << n - count << endl;
    }
    return 0;
}
