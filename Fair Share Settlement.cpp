#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        // Calculate the rounded share each friend pays
        int rounded_share = N / (K + 1);

        // Calculate the total amount reimbursed by friends
        int total_repaid = K * rounded_share;

        // Calculate the net amount you pay
        int net_payment = N - total_repaid;

        // Output the result
        cout << net_payment << endl;
    }
    return 0;
}
