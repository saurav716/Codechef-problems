#include <iostream>
using namespace std;

int main() {
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    // Check if X matches any of the topics A, B, or C
    if (X == A || X == B || X == C) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
