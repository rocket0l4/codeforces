#include <bits/stdc++.h>
using namespace std;
int n = 101;
// void solve()
// {
//     int n;
//     cin >> n;
//     int a = 0, b = 0, w = 0;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//         if (v[i] == 1)
//             a++;
//         else
//             b++;
//     }
//     // int ans = 0;
//     if (b > a)
//     {
//         w += b - n / 2;
//         b = n / 2;
//         a = n - b;
//     }
//     if (b % 2)
//     {
//         w++;
//     }
//     cout << w << '\n';
// }
void solve()
{
    int n,count =0;;
    cin >> n;
    int v[101];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        count += v[i];
    }
    if(n%count == 0 || n%count ==1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
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
}