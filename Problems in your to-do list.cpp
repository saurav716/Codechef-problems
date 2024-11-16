#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> difficulties(N);

        for (int i = 0; i < N; i++) {
            cin >> difficulties[i];
        }

        int remove_count = 0;
        for (int d : difficulties) {
            if (d >= 1000) {
                remove_count++;
            }
        }

        cout << remove_count << endl;
    }
}

int main() {
    solve();
    return 0;
}
