#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
        char A,B;

	    int count=0,ans=0;
	    int n;cin>>n;
	    string s[n];
	    for(int i=0;i<n;i++){
	        cin>>s[i];
	    }
	    for(int i=0;i<n;i++){
	        if(s[i] == "A"){
	            count++;
	        }else{
                ans++;
            }
	    }
	    cout<<count<<" "<<ans<<endl;
	}
	return 0;
}
