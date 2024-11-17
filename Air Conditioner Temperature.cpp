#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;
        int min_temp = max(A, C);

        if (min_temp <= B) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
