#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i<= num/2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to find the next prime after n
int nextPrime(int n) {
    int next = n + 1;
    while (!isPrime(next)) {
        next++;
    }
    return next;
}

int main() {
    int n, m;
    cin >> n >> m;

    // Check if m is the next prime after n
    if (nextPrime(n) == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

