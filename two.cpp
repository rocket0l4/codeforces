#include <bits/stdc++.h>
using namespace std;
#define ll long long
void wow()
{
    ll count = 0;
    ll i, j, k;
    ll n;
    cin >> n;
    vector<ll> arr(n);
    // ll arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sort(arr,arr+n);
    for (i = 0; i < 257; i++)
    {
        vector<ll> b(n);
        // ll b[n];
        for (j = 0; j < n; j++)
        {
            b[j] = arr[j] ^ i;
        }
        for (k = 0; k < n; k++)
        {
            count ^=  b[k];
        }
        if (count == 0)
        {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        wow();
    }
    return 0;
}