#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> v;
typedef pair<int, int> pa;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(a) a *a
#define REP(i, a, b) for (int i = a; i <= b; i++)
ll count = 0, ans = 0, i, j, k, l, m;
void solve()
{
    int count = 0, ans = 0;
    string s;
    cin >> s;
    int n = s.size();
    sort(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
            i++;
        }
        else if(s[i] != s[i+1]) 
        {
            ans++;
            i++;
        }
    }
    int sol = abs(count - ans);
    if (sol)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}