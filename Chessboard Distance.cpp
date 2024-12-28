#include <iostream>
#include <vector>
#include <cmath> // for abs()
using namespace std;

// Function to calculate Chessboard Distance
int chessboard_distance(int x1, int y1, int x2, int y2) {
    return max(abs(x1 - x2), abs(y1 - y2));
}

int main() {
    int T; // Number of test cases
    cin >> T;

    vector<int> results; // Store results for all test cases
    for (int i = 0; i < T; ++i) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        // Calculate and store the Chessboard Distance
        results.push_back(chessboard_distance(x1, y1, x2, y2));
    }

    // Output all results
    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
