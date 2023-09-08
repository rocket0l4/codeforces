#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> n;
            if (n)
                count++;
        }
        cout << (count + 2) / 3 << endl;
    }

    return 0;
}
