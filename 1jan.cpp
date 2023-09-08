#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int count =0;
        int n;
        cin>>n;
        int arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
            count += arr[i];
        }
        if(count%2 == 0 ){
            cout<<0<<endl;
        }else if(count %2 != 0 && count < 10){
            cout<<1<<endl;
        }else if(count %2 !=0 && count < 12){
            cout<<2<<endl;
        }else{
            cout<<4<<endl;
        }


    }
    return 0;
}