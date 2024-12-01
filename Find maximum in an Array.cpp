#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> heights(n);
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }
        // Find the maximum height
        int maxHeight = *max_element(heights.begin(), heights.end());
        cout << maxHeight << '\n';
    }
}

int main() {
    
    solve();
    return 0;
}
