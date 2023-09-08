#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int count = 0, ans = 0;
        count = a.length() - 1, ans = b.length() - 1;
        if (a[a.length() - 1] == 'S')
            count = -count - 1;
        if (b[b.length() - 1] == 'S')
            ans = -ans - 1;
        if (a[a.length() - 1] == 'L')
            count += 1;
        if (b[b.length() - 1] == 'L')
            ans += 1;
        if (count == ans)
            cout << "=" << endl;
        if (count > ans)
            cout << ">" << endl;
        if (count < ans)
            cout << "<" << endl;
    }
    return 0;
}