#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count =0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        for (int i = 0; i < n; i++)
        {
            count += arr[i] - arr[0];
        }
        cout << count << endl;
    }
    return 0;
}30oct
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, sum = 0;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++){
//             cin >> a[i];
//         }    
//         sort(a, a + n);
//         for (int i = 0; i < n; i++)
//         {
//             sum += a[i] - a[0];
//         }
//         cout << sum << endl;
//     }
// }