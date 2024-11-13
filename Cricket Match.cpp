#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, X; 
        cin >> N >> X;
        
        int subscriptions_needed = (N + 5) / 6;
        
        int total_cost = subscriptions_needed * X;
        
        cout << total_cost << endl;
    }

    return 0;
}
