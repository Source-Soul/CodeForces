#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> words(n);
        for (int i = 0; i < n; ++i) {
            cin >> words[i];
        }

        int cnt = 0, curr_len = 0;
        for (int i = 0; i < n; ++i) {
            if (curr_len + words[i].size() <= m) {
                cnt++;
                curr_len += words[i].size();
            } else {
                break;
            }
        }

        cout << cnt << endl;
    }

}
