#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        int refills = (X + Y - 1) / Y; 
        int total_cost = refills * Z;

        cout << total_cost << endl;
    }

    return 0;
}
