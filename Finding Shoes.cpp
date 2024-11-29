#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T; 
    cin >> T;
    
    vector<int> results;
    for (int t = 0; t < T; ++t) {
        int N, M;
        cin >> N >> M;
        
        int extra_shoes = max(0, N - M) + N;
        results.push_back(extra_shoes);
    }
    
    for (int result : results) {
        cout << result << endl;
    }
    
    return 0;
}
