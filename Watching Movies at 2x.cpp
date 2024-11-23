#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int T;
    cin >> T;

    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int max_tastiness = max(max(a + c, a + d), max(b + c, b + d));

        cout << max_tastiness << endl;
    }
}

int main() {
    solve();
    return 0;
}
