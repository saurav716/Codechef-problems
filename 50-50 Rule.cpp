#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        if (X < 50) {
            cout << "Z" << endl;
        } else if (Y < 50) {
            cout << "F" << endl;
        } else {
            cout << "A" << endl;
        }
    }

    return 0;
}
