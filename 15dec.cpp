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
        cin >> n;
        string s;
        cin >> s;
        string a = s;
        sort(s.begin(),s.end());
        for (int i = 0; i < n; i++)
        {
            if (s[i] != a[i])
            {
                count += 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}