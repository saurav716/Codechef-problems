#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x, y, z;
    cin>>x>>y>>z;
    int a=y*z;
    if(x>=a){
        cout<<x-a<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
