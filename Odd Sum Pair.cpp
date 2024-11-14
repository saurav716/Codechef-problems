#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        int oddCount = 0;
        if (A % 2 != 0) oddCount++;
        if (B % 2 != 0) oddCount++;
        if (C % 2 != 0) oddCount++;
        if (oddCount > 0 && oddCount < 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
