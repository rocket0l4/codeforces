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
        int arr[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == 1 && arr[i + 1] == 0)
            {
                count++;
                arr[i]++;
                
            }
            else
            {
                count = 0;
            }
        }
        cout << count << endl;
    }
    return 0;
}