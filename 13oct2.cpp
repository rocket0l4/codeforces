#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        string s;
        for (int i = 1; i <= 8; ++i)
        {
            cin >> s;
            if (s == "RRRRRRRR")
                count = 1;
        }
        if (count == 1)
            cout << "R" << endl;
        else
            cout << "B" << endl;
    }
    return 0;
}