#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    // Check if n can be represented as the sum of 2020 and 2021
    int count2020 = n / 2020;
    int remainder = n % 2020;

    if (remainder <= count2020) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

