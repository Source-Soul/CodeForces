#include <iostream>
#include <vector>

using namespace std;

bool canColor(const vector<int>& arr) {
    int evenSum = 0, oddSum = 0;
    for (int num : arr) {
        if (num % 2 == 0) {
            evenSum += num;
        } else {
            oddSum += num;
        }
    }

    // If both sums have the same parity and both are non-zero, we can color
    return (evenSum % 2 == oddSum % 2) && evenSum > 0 && oddSum > 0;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        if (canColor(arr)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
