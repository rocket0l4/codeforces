#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int m;cin>>m;
        int count =1;
        while(count*10<=m)
        count*=10;
        cout<<m-count<<endl;
    }
    return 0;
    
}