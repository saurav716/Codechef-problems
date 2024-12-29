#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int X, Y; // Amount Chef has and cost of one chocolate
        cin >> X >> Y;

        // Calculate the maximum number of chocolates Chef can buy
        cout << (X / Y) << endl;
    }

    return 0;
}
