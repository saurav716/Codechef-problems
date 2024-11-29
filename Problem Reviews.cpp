#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
while(t--){
    int n;
    cin>>n;
    int ar[n];
   int  pass=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]<5){
            pass=1;
        }
    }
    if(pass==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
return 0;

}
