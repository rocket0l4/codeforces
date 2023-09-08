#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        long long count = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = a[i];
            a[i] = min(a[i], b[i]);
            b[i] = max(sum, b[i]);
        }
        for (int i = 1; i < n; i++)
        {
            count += (abs(a[i] - a[i - 1]) + abs(b[i] - b[i - 1]));
        }
        cout << count << endl;
    }
    return 0;
}