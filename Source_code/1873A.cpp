#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        string s;
        cin >> s;  // Input string


        if (s == "abc" || s == "acb" || s == "bac" || s == "cba")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

