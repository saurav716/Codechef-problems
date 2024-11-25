#include <iostream>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;
    int cnt=4-X-Y-Z;
    if ((X+cnt)>Z) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
