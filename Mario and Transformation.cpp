#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int state = x % 3;
        if (state == 0)
            cout << "NORMAL\n";
        else if (state == 1)
            cout << "HUGE\n";
        else
            cout << "SMALL\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
