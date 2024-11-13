#include <iostream>
using namespace std;

int main() {
    int R1, R2, D1, D2;
    
    cin >> R1 >> R2;
    cin >> D1 >> D2;
    
    int finalRatingDominater = R1 + D1;
    int finalRatingEverule = R2 + D2;

    if (finalRatingDominater > finalRatingEverule) {
        cout << "Dominater" << endl;
    } else {
        cout << "Everule" << endl;
    }

    return 0;
}
