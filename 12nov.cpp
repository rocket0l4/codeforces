#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << (a + c) % 2 << endl;
    }
    return 0;
}