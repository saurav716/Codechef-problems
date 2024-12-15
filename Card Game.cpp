#include <iostream>
using namespace std;

void solve() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        // Count evens and odds in the range [1, N]
        int evens = N / 2;        // Total even numbers
        int odds = N - evens;     // Total odd numbers

        // Check parity of X
        if (X % 2 == 0) {
            // X is even -> Need an even card
            cout << evens - 1 << endl;
        } else {
            // X is odd -> Need an odd card
            cout << odds - 1 << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
