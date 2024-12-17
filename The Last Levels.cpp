#include <iostream>
#include <vector>
using namespace std;

int calculateTotalTime(int X, int Y, int Z) {
    int total_time_levels = X * Y;
    int number_of_breaks = (X / 3) - (X % 3 == 0 ? 1 : 0);
    int total_time_breaks = number_of_breaks * Z;
    return total_time_levels + total_time_breaks;
}

int main() {
    int T;
    cin >> T;
    vector<int> results;
    
    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        results.push_back(calculateTotalTime(X, Y, Z));
    }
    
    for (int result : results) {
        cout << result << endl;
    }
    
    return 0;
}
