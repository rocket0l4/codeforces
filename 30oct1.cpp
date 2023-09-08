#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0,sol=0;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = n-1; i >0; i--)
        {
            if (arr[i] == 0)
            {
                count = i;
                break;
            }
        }
        for(int i =0;i<n;i++){
            if(arr[i] == 0){
                sol = i;
                break;
            }
        }
        if(count == 0 && sol == 0){
            cout<<0<<endl;
        }else{
            count++;
            sol--;
            cout<<count-sol<<endl;
        }
    }
    return 0;
}