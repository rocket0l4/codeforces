#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }    
        sort(arr, arr + n);
        for (int i = 0; i <n; i++){
            
            if (arr[n-i-1] == 0)
            {
                cout << "NO" << endl;
                break;
            }
            else
            {
                cout << "YES" << endl;
                break;
            }
        }
    }
    return 0;
}