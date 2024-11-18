#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int A, B; 
        cin >> A >> B;

        int valuation1 = A * 10; 
        int valuation2 = B * 5; 
       
        if (valuation1 > valuation2) {
            cout << "FIRST" << endl;
        } else if (valuation2 > valuation1) {
            cout << "SECOND" << endl;
        } else {
            cout << "ANY" << endl;
        }
    }

    return 0;
}
