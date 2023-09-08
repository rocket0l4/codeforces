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
    int n, k;
    cin >> n >> k;
    // int a =n-3;
    // int count = (n-k-1)/k;
    // int ans = (k-2)/k;
    //  a = max(a,count+ans);
    // cout<<a+2<<endl;

    int count = 0;
    int ans = n * k;
    int a = ans % 4;
    if (n > k && k == 1)
    {
        cout << n << endl;
    }
    else
    {
        if (ans > 0 && ans <= 9)
        {
            cout << a << endl;
        }
        else
        {
            if (a == 0)
            {
                count += n % k;
                cout << count + 2 << endl;
            }
            else if (a == 1)
            {
                cout << (n % k) - (a) << endl;
            }
            else if (a > 1)
            {
                cout << a + 1 << endl;
            }
        }
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