#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int total_hours = (X * 4) + Y;
        cout << total_hours << endl;
    }

    return 0;
}
