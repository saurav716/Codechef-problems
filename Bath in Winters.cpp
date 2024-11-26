#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int water_per_person = 2 * Y;
        int max_people = X / water_per_person;

        cout << max_people << endl;
    }

    return 0;
}
