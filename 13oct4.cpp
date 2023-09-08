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
        int count = 0;
        int ans = 0;
        int arr;
        for (int i = 0; i < n; i++)
        {
            cin >> arr;
            if(arr%2)
            count += (arr % 2);
        }

        cout << min(count, n - count) << endl;
    }
    return 0;
}