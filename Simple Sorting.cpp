#include <bits/stdc++.h>
using namespace std;

int main() {
    // Read the number of integers
    int N;
    cin >> N;

    // Create a vector to store the numbers
    vector<int> numbers(N);

    // Read each number into the vector
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    // Sort the vector in non-decreasing order
    sort(numbers.begin(), numbers.end());

    // Output each number in the sorted vector
    for (const int &num : numbers) {
        cout << num << endl;
    }

    return 0;
}
