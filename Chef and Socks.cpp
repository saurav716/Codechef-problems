#include <iostream>
using namespace std;

int main() {
    // Input: 3 space-separated integers A, X, Y
    int A, X, Y;
    cin >> A >> X >> Y;

    // Calculate total money Chef has
    int total_money = X + Y;

    // Check if Chef can afford the socks
    if (total_money >= A) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
