#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int total_money = (X * 10) + (Y * 5);
        cout << total_money << endl;
    }

    return 0;
}
