#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int N, X, Y; 
        cin >> N >> X >> Y;
        if (Y % X == 0 && Y <= N * X) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
