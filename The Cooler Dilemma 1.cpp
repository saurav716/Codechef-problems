#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;
    int cost_individual = 2 * X + 3 * Y;
    int cost_combo = 2 * Z + Y;
    int min_cost = min(cost_individual, cost_combo);
    cout << min_cost << endl;

    return 0;
}
