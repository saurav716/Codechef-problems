#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        
        cout << min(20, X / Y) << endl;
    }
    return 0;
}
