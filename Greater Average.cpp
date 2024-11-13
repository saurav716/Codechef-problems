#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;
        int discount10Percent = X / 10;
        int flatDiscount = 100;
        int maxDiscount = max(discount10Percent, flatDiscount);

        cout << maxDiscount << endl;
    }

    return 0;
}
