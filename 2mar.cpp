#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count, ans = 0;
        int n;
        cin >> n;
        int arr[n];
        string a = "MEOW";
        string  b = "meow";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
           if(arr[i] == 'a' || arr[i] == 'b'){
            ans +=1;
           }
        }
        if (ans >= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}