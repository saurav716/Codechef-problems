#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    // Calculate the number of practice cakes
    int practice_cakes = 24 - X + 1;

    // Output the result
    cout << practice_cakes << endl;

    return 0;
}
