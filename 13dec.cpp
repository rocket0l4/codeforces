#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int n;
        string s;
        cin >> n >> s;
        for (int i = n - 2; i > 1; --i)
        {
            for (int j = 1; j < i; ++j)
            {
                if (s[i] == s[j - 1] && s[i+1] == s[j])
                {
                    count = 1;
                    i = 0;
                    j = n;
                }
            }
        }
        if (count)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}