#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the minimum number of bags for each test case
vector<int> fillCandies(const vector<tuple<int, int, int>>& testCases) {
    vector<int> results;
    for (const auto& testCase : testCases) {
        int N, K, M;
        tie(N, K, M) = testCase; // Extract values for each test case
        int capacity = K * M;   // Capacity of a single bag
        int bags = (N + capacity - 1) / capacity; // Calculate required bags
        results.push_back(bags);
    }
    return results;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    vector<tuple<int, int, int>> testCases(T); // Store test cases
    for (int i = 0; i < T; ++i) {
        int N, K, M;
        cin >> N >> K >> M;
        testCases[i] = make_tuple(N, K, M); // Read each test case
    }

    vector<int> results = fillCandies(testCases);

    for (int result : results) {
        cout << result << endl; // Output the result for each test case
    }

    return 0;
}
