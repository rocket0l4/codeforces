#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;

        for (int i = 1; i <= num - 4; ++i)
        {
            cout << num - 2 - i << ' ';
        }
        cout << num - 2 << ' ' << 1 << ' ' << num - 1 << ' ' << num << endl;
    }
    return 0;
}