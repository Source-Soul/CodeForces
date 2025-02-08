/*4
2 3
0 4 2
1 5 3
1 1
0
2 2
1 2
0 3
4 1
1
2
0
3*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, m;
        cin >> n >> m; // Number of cows and cards per cow

        vector<vector<int>> cards(n, vector<int>(m));

        // Read the cards for each cow
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> cards[i][j];
            }
            sort(cards[i].begin(), cards[i].end()); // Sort each cow's cards
        }

        // Generate the initial permutation of cows
        vector<int> p(n);
        iota(p.begin(), p.end(), 1);

        bool possible = false;

        // Check all permutations to find a valid one
        do {
            int top = -1; // The top card on the center pile
            bool valid = true;

            for (int round = 0; round < m && valid; ++round) {
                for (int i = 0; i < n && valid; ++i) {
                    int cow = p[i] - 1;
                    auto it = upper_bound(cards[cow].begin(), cards[cow].end(), top);
                    if (it == cards[cow].end()) {
                        valid = false;
                    } else {
                        top = *it;
                        cards[cow].erase(it);
                    }
                }
            }

            if (valid) {
                possible = true;
                break;
            }
        } while (next_permutation(p.begin(), p.end()));

        if (possible) {
            for (int i = 0; i < n; ++i) {
                cout << p[i] << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
