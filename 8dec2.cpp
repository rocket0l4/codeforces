#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        for(int i =0;i<n;i++){
            if(s[i] == 'U'){
                s[i] = 'D';
            }else if(s[i] == 'D'){
                s[i] = 'U';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}