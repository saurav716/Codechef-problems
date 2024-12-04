#include <iostream>
#include <string>
#include <vector>
using namespace std;

string get_complementary_strand(const string& s) {
    string complementary;
    for (char c : s) {
        if (c == 'A') complementary += 'T';
        else if (c == 'T') complementary += 'A';
        else if (c == 'C') complementary += 'G';
        else if (c == 'G') complementary += 'C';
    }
    return complementary;
}

int main() {
    int t;
    cin >> t;
    vector<string> results;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        results.push_back(get_complementary_strand(s));
    }

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}
