#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    vector<int> results;

    while (T--) {
        int A, B;
        cin >> A >> B; // Input the two numbers
        int C = 21 - (A + B);

        // Check if the third number is valid
        if (C >= 1 && C <= 10) {
            results.push_back(C);
        } else {
            results.push_back(-1);
        }
    }

    // Output the results
    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
