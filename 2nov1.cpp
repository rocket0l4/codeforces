#include <bits/stdc++.h>
using namespace std;
int arr[200010];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // int count = 0;
        // int n;
        // cin >> n;
        // // int arr[101];
        // for (int i = 1; i <= n; i++)
        // {
        //     cin >> arr[i];
        //     if (arr[i]== 0 && arr[i-1])
        //     {
        //         count += 1;
        //     }
        // }
        // if(arr[n])count += 1;
        // cout << min(count, 2) << endl;
        int n;
        cin >> n;
        int count = 0, sol = 0;
        int y;
        while (n--)
        {
            cin >> y;
            if (y == 0)
            {
                sol = 0;
            }
            else
            {
                if (!sol)
                {
                    count += 1;
                    sol = 1;
                }
            }
        }
        cout << min(count, 2) << endl;
    }
    return 0;
}