#include <iostream>
using namespace std;

void cricketTournament() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N, M; // Number of teams and minimum matches
        cin >> N >> M;

        int maxMatches = N - 1;

        if (M <= maxMatches) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    cricketTournament();
    return 0;
}
