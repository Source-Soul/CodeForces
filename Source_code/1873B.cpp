#include<bits/stdc++.h>
using namespace std;


long long calculateProduct( vector<int>& digits) {
    long long product = 1;
    for (int digit : digits) {
        product *= digit;
    }
    return product;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long long maxProduct = 0;

        for (int i = 0; i < n; ++i) {
            int orgValue = a[i];
            a[i] += 1;
            maxProduct = max(maxProduct, calculateProduct(a));
            a[i] = orgValue;
        }

        cout << maxProduct << endl;
    }

    return 0;
}

