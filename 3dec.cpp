#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n =3;
        vector<int > a(n);
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        if(a[0] == a[1] && a[2]%2==0){
            cout<<"YES"<<endl;
        }else if(a[1] == a[2] && a[0]%2==0){
            cout<<"YES"<<endl;
        }else if(a[0] == a[2] && a[1]%2==0){
            cout<<"YES"<<endl;
        }else if(a[2] - a[1] != a[0]){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}