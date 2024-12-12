#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    // Check if errors are at least half of the total lines
    if (M >= (N / 2.0)) {
        cout << "NEWBIE" << endl;
    } else {
        cout << "PRO" << endl;
    }

    return 0;
}
