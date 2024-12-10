#include <iostream>
#include <cmath> // for sqrt function
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        // Compute the square root and round down
        cout << static_cast<int>(sqrt(N)) << endl;
    }

    return 0;
}
