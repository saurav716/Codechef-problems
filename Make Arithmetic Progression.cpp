#include <iostream>
#include <vector>
using namespace std;

// Function to determine the minimum operations to make (X, Y, Z) an arithmetic progression
int minimumOperationsToAP(int x, int y, int z) {
    // Check if it's already an arithmetic progression
    if (2 * y == x + z) {
        return 0; // No operation needed
    }

    // Only one operation is needed to modify either X, Y, or Z
    return 1;
}

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        // Output the result for each test case
        cout << minimumOperationsToAP(x, y, z) << endl;
    }

    return 0;
}
