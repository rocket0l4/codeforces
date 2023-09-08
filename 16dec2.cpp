#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int count = 0;
    cin >> t;
    while (t--)
    {
        int m,n,o,p,q,r;
        cin >> m >> n >> o >> p >> q >> r;
        if(m<n && o<p && q<r)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}