#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int minChildren = (N + 1) / 2;
        int maxChildren = N;
        cout << minChildren << " " << maxChildren << endl;
    }

    return 0;
}
