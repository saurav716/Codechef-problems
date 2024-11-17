#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int N;
        cin >> N;

        string str = to_string(N);

        reverse(str.begin(), str.end());
        cout << stoi(str) << endl;
    }

    return 0;
}
