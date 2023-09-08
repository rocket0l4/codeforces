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
    // int n;
    // cin >> n;
    // vector<int> v(n);
    // int count = 0, ans = 0, su = n / 2, i = 0, j = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    // sort(v.begin(), v.end());
    // for (int i = 0; i < n / 2; i++)
    // {
    //     count += v[n - i - 1] - v[i];
    // }

    // cout << count << endl;
    long long n;
    cin >> n;
    long long int count = 0, ans = 0, su = 0;
    int v;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        if (v <= 0)
        {
            if (v < 0)
                count = 1;
        }
        else
        {
            if (v == 1)
                ans++;
            count = 0;
        }
        if (v < 0)
        {
            v *= -1;
        }
        su += v;
    }

    if (count == 1)
        ans++;
    cout << su << " " << ans << endl;
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