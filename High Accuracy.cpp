#include <iostream>
using namespace std;

void minimum_incorrect_questions(int T, int scores[]) {
    for (int t = 0; t < T; t++) {
        int X = scores[t];
        for (int incorrect = 0; incorrect <= 100; incorrect++) {
            if ((X + incorrect) % 3 == 0) {
                int correct = (X + incorrect) / 3;
                if (correct + incorrect <= 100) {
                    cout << incorrect << endl;
                    break;
                }
            }
        }
    }
}

int main() {
    int T;
    cin >> T;
    int scores[T];
    for (int i = 0; i < T; i++) {
        cin >> scores[i];
    }
    minimum_incorrect_questions(T, scores);
    return 0;
}
