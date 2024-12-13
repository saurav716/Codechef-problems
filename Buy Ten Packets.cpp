#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

vector<int> minimum_cost_to_buy_packets(int t, vector<pair<int, int>>& test_cases) {
    vector<int> results;
    for (auto& case_ : test_cases) {
        int X = case_.first, Y = case_.second;
        int min_cost = numeric_limits<int>::max();
        for (int a = 0; a <= 2; ++a) { // Possible values for a are 0, 1, 2
            if ((10 - 4 * a) % 2 == 0 && (10 - 4 * a) >= 0) {
                int b = (10 - 4 * a) / 2;
                int cost = a * Y + b * X;
                min_cost = min(min_cost, cost);
            }
        }
        results.push_back(min_cost);
    }
    return results;
}

int main() {
    int T;
    cin >> T;
    vector<pair<int, int>> test_cases(T);
    for (int i = 0; i < T; ++i) {
        cin >> test_cases[i].first >> test_cases[i].second;
    }

    vector<int> results = minimum_cost_to_buy_packets(T, test_cases);

    for (int result : results) {
        cout << result << "\n";
    }

    return 0;
}
