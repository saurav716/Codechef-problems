#include <iostream>
using namespace std;

int maxActivities(int X) {
    // Duration of activities in ascending order
    int activities[] = {1, 2, 4};
    int totalTime = 0, count = 0;

    // Iterate through each activity
    for (int i = 0; i < 3; i++) {
        if (totalTime + activities[i] <= X) {
            totalTime += activities[i];
            count++;
        } else {
            break;
        }
    }

    return count;
}

int main() {
    int X;
    cin >> X; // Input available hours
    cout << maxActivities(X) << endl; // Output maximum number of activities
    return 0;
}
