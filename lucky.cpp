#include<bits/stdc++.h>
using namespace std;
int clock(int n){
    vector<int>v;
    while(n!=0){
        v.push_back(n%10);
        n = n/10;
    }
    sort(v.begin(),v.end());
    int s = v.size();
    return v[s-1]-v[0];

}
int main(){
    int t;cin>>t;
    while(t--){
        int l,r;
        int count =0,ans =0;
        cin>>l>>r;
        count = min(l+100,r);
        for(int i=l;i<=count;i++){
            ans = max(ans,clock(i));
        }
        for(int i =l;i<=count;i++){
            if(ans == clock(i)){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}