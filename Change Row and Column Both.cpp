#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int sx, sy, ex, ey;
        cin >> sx >> sy >> ex >> ey;

        // Determine the number of moves
        if (sx != ex && sy != ey) {
            cout << 1 << endl; // One move if both row and column change
        } else {
            cout << 2 << endl; // Two moves otherwise
        }
    }

    return 0;
}
