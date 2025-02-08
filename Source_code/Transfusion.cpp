#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        long long total_sum = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total_sum += a[i];
        }

        // Check if the total sum can be divided evenly among all elements
        if (total_sum % n != 0) {
            cout << "NO" << endl;
            continue;
        }

        // Calculate target value for each element
        long long target = total_sum / n;
        bool possible = true;
        long long balance = 0; // Balance surplus or deficit

        for (int i = 0; i < n; ++i) {
            // Update balance considering current difference
            balance += a[i] - target;

            // If the balance becomes negative, redistribution is not possible
            if (balance < 0) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}
