#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 1;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                if (i && arr[i - 1] == 0)
                {
                    count = -1;
                    break;
                }
            }
            else
            {
                if (i && arr[i - 1] == 1)
                {
                    count += 5;
                }
                else
                {
                    count += 1;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}