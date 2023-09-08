#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        while (s.find(s[0], 1) != -1)
            s.erase(s.begin());
        cout << s << endl;
    }
    return 0;
}