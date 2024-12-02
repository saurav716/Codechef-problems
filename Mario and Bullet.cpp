#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        
        cin >> X >> Y >> Z;

        int timeToHit = Y / X;

        int delay = max(0, Z - timeToHit);

        cout << delay << endl;
    }

    return 0;
}
