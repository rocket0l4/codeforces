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
ll count = 0, ans = 0, i, j, k, l, m, n;
void solve()
{
    cin >> n >> m;
    ll count = abs(n + m);
    ll ans = abs(n - m);
    if (n > m)
    {

        if (n > m && n % 3 == 0 && count %ans == 0 || count %ans ==1 || count % ans == abs(count-ans)||  abs(count-ans)>2 && n % m < 7)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if (n == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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