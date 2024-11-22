#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int PA, PB, QA, QB;
        cin >> PA >> PB >> QA >> QB;

        int P_penalty = max(PA, PB);
        int Q_penalty = max(QA, QB);

        if (P_penalty < Q_penalty) {
            cout << "P" << endl;
        } else if (P_penalty > Q_penalty) {
            cout << "Q" << endl;
        } else {
            cout << "TIE" << endl;
        }
    }

    return 0;
}
