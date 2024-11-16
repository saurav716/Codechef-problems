#include <iostream>
using namespace std;

void check_monopoly(int T) {
    while (T--) {
        int P, Q, R, S;
        cin >> P >> Q >> R >> S;

        if (P > Q + R + S || Q > P + R + S || R > P + Q + S || S > P + Q + R) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    int T;
    cin >> T;
    check_monopoly(T);
    return 0;
}
