#include <iostream>
using namespace std;

void solve() {
    int T;
    cin >> T;
    
    while (T--) {
        int A, B, C, D;
        cin >> A >> B; 
        cin >> C >> D; 

        if (C >= A && D >= B) {
            cout << "POSSIBLE" << endl;
        } else {
            cout << "IMPOSSIBLE" << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
