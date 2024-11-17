#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int A, B;
        cin >> A >> B;

        int Price1 = 100 - A;
        int Price2 = 200 - 2 * B;

        if (Price1 < Price2) {
            cout << "FIRST" << endl;
        } else if (Price1 > Price2) {
            cout << "SECOND" << endl;
        } else {
            cout << "BOTH" << endl;
        }
    }

    return 0;
}
