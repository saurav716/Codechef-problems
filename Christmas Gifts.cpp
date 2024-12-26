#include <iostream>
using namespace std;

int main() {
    const int totalArea = 1000;
    int T;
    cin >> T;

    while (T--) {
        int H, L, W;
        cin >> H >> L >> W;

        int surfaceArea = 2 * (H * L + L * W + H * W);
        int maxGifts = totalArea / surfaceArea;

        cout << maxGifts << endl;
    }

    return 0;
}
