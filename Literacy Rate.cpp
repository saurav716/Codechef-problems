#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int P, L;
        cin >> P >> L;
        if (100 * L >= 75 * P) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
