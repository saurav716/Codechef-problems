#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int X, Y;
        cin >> X >> Y; // Current rating and target rating

        if (X >= Y) {
            cout << 0 << endl; // No games needed
        } else {
            // Calculate the minimum number of games needed
            int games = (Y - X + 7) / 8;
            cout << games << endl;
        }
    }

    return 0;
}
