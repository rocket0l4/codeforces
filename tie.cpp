#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; i++)
void solve()
{
    int n;
    cin >> n;
    int count =0;
    string s,a;
    cin >> s;
    REP(i,0,n){
        a.push_back(s[i]);
        count = i+1;
        while(count <n-1 && s[count] != s[i]){
            count++;
        }
        i = count;

    }
    cout<<a<<endl;
    
   
    
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