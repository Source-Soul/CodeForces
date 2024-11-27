#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Size of the array
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Find the maximum element in the array
        int max_val = *max_element(a.begin(), a.end());

        // Calculate the number of operations required
        int operations = 0;
        for (int i = 0; i < n; ++i) {
            operations += max_val - a[i];
        }

        // Output the result for this test case
        cout << operations << endl;
    }

    return 0;
}
