#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C; 
        cout << max(A, max(B, C)) << endl; 
    }

    return 0;
}
