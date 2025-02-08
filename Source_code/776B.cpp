#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 100000;
vector<int> color(MAX_N + 2, 0);

int main() {
    int n;
    cin >> n;

    vector<int> isPrime(n + 2, 1); // To check if a number is prime
    int colorCount = 1; // Start with at least one color

    for (int i = 2; i <= n + 1; i++) {
        if (isPrime[i]) { // If `i` is prime, assign a new color
            color[i] = colorCount++;
        }
        for (int j = 2 * i; j <= n + 1; j += i) { // Mark multiples as composite
            isPrime[j] = 0;
            if (color[j] == 0) {
                color[j] = color[i];
            }
        }
    }

    cout << (n > 1 ? 2 : 1) << "\n"; // At most 2 colors needed
    for (int i = 2; i <= n + 1; i++) {
        cout << color[i] << " ";
    }
    cout << "\n";

    return 0;
}

