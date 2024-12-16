#include <iostream>
#include <algorithm> // For std::max
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    while (T--) {
        int N; // Total number of questions
        int NA, NB, NC, ND; // Number of questions with correct answers as A, B, C, D
        cin >> N;
        cin >> NA >> NB >> NC >> ND;
        
        // Find the maximum among NA, NB, NC, ND
        int max_marks = max({NA, NB, NC, ND});
        
        // Output the result
        cout << max_marks << endl;
    }
    return 0;
}
