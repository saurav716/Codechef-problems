#include <iostream>
using namespace std;

string classifySeat(int N) {
    if (N <= 15) { // Lower Deck
        if (N <= 10)
            return "Lower Double";
        else
            return "Lower Single";
    } else { // Upper Deck
        if (N <= 25)
            return "Upper Double";
        else
            return "Upper Single";
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        cout << classifySeat(N) << endl;
    }

    return 0;
}
