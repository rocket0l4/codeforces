#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        char arr[n][m];
        r--, c--;
        int w = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'B')
                    w = 1;
                if (i == r || j == c)
                {
                    if (arr[i][j] == 'B')
                        ans = 1;
                }
            }
        }
        if (arr[r][c] == 'B')
        {
            cout << 0 << endl;
        }
        else if (w == 1 && ans == 1)
        {
            cout << 1 << endl;
        }
        else if (w == 1)
        {
            cout << 2 << endl;
        }else
        cout << -1 << endl;
    }
    return 0;
}