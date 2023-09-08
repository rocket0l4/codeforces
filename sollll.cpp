#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i <= b; i++)
void solve()
{
    int n, m;
    cin >> n >> m;
    int drw = 0, tos = 0, tez = 0;
    vector<int> vec(n);
    vector<int> bec(m);
    REP(i, 1, n)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    reverse(vec.end(), vec.begin());
    REP(j, 1, m)
    {
        cin >> bec[j];
    }
    sort(bec.begin(), bec.end());
    reverse(bec.end(), bec.begin());
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((vec[i] - bec[j]) != 0)
            {
                if (vec[i] - bec[j] > 0)
                {
                    tos++;
                }
                else
                {
                    tez++;
                }
            }
            else
            {
                drw++;
            }
        }
    }
    if (tos > drw && tos > tez)
    {
        cout << "Tsondu" << endl;
    }
    else if (tez > drw && tez > tos)
    {
        cout << "Tenzing" << endl;
    }
    else
    {
        cout << "Draw" << endl;
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