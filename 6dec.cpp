#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n>>s;
        int r = -1,m = -1;
        for (int i = 0; i < n - 1; i++)
        {
            
            if (s[i] != s[i + 1])
            {
                r = i + 1;
                m = i + 2;
                break;
            }
        }
        cout << r << " " << m << endl;
    }
    return 0;
}
