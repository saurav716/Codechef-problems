#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int X; 
    cin >> X;

    int last_two_digits = X % 100;

    cout << "K" << setw(2) << setfill('0') << last_two_digits << endl;

    return 0;
}
