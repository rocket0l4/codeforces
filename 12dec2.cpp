#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int m = n.size();
        cout << (n[0] - '0') + 9 * (m - 1) << endl;
    }
    return 0;
}