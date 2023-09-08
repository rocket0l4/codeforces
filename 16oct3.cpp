#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int count =0;
        string s;
        string ans = "aaab";
        int arr[n];
        for(int i =0;i<=n;i++){
            cin>>arr[i];
            cin>>s;
            if(s == ans ){
                count =0;
            }else{
                count += 1;
            }
        }
        if(count > 0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}