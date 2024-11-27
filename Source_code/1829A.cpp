#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    string target = "codeforces";

    while (t--) {
        string s;
        cin >> s;

        int diff_count = 0;


        for (int i = 0; i < 10; i++) {
            if (s[i] != target[i]) {
                diff_count++;
            }
        }


        cout << diff_count << endl;
    }

    return 0;
}

