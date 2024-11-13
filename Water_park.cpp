#include <iostream>
using namespace std;

int main() {
    int W, H;
    cin >> W >> H;

    int chefWeight = 60;
    int chefHeight = 130;

    // Check if Chef meets both conditions
    if (chefWeight <= W && chefHeight >= H) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
