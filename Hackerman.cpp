#include <iostream>
#include <vector>

using namespace std;

// Helper function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {

    vector<bool> is_prime(13, false); 
    for (int i = 2; i <= 12; i++) {
        is_prime[i] = isPrime(i);
    }

    int T;
    cin >> T;

    while (T--) {
        int A, B;
        cin >> A >> B;

        int sum = A + B;

        if (is_prime[sum]) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }

    return 0;
}
