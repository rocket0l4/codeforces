#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0,ans=0;
        int n;
        cin >> n;
        long long int arr[n];
        // if (n == 1)
        // {
        //     cout << "Yes" << endl;
        // }
        // else
        // {

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            
        }
       
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[i+1])
            {
                count += 1;
            }
            
        }
        if (count >= 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        // }
    }
    return 0;
}