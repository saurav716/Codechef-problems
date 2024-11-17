#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        int Distance1 = X - 1;
        int Distance2 = 100 - X;
        if (Distance1 <= Distance2) {
            cout << "LEFT" << endl;
        } else {
            cout << "RIGHT" << endl;
        }
    }

    return 0;
}
