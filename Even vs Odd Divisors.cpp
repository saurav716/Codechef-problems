#include <iostream>
using namespace std;

pair<int, int> countDivisors(int N) {
    int evenCount = 0, oddCount = 0;
    for (int i = 1; i <= N; ++i) {
        if (N % i == 0) {
            if (i % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }
    return {evenCount, oddCount};
}

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int N;
        cin >> N; 

        pair<int, int> counts = countDivisors(N);
        int evenDivisors = counts.first;
        int oddDivisors = counts.second;

        if (evenDivisors > oddDivisors) {
            cout << 1 << endl;
        } else if (evenDivisors == oddDivisors) {
            cout << 0 << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
