#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int n;
        cin >> n;
        string s;
        cin>>s;
        if(n>0)count =2;
        else count=0;
        sort(s.begin(),s.end());
        for (int i =1;i<n;i++){
            if(s[i-1]!=s[i])
            count +=2;
            else count +=1;
        }
        cout<<count<<endl;

    }

    return 0;
}