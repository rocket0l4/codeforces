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
    int n;
    cin >> n;
    vector<int> v(n);
    int count = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    if (v[0] < 0)
    {
        cout<<v[0]<<endl;
    }else{
        cout<<v[n-1]<<endl;
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