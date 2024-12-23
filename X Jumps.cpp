#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int ans=0;
        ans=(x/y)+(x%y);
        cout<<ans<<endl;
    }
    return 0;
}
