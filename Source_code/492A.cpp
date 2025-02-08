#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int height = 0;
    int used_cubes = 0;
    int level = 1;
    while (used_cubes + (level * (level + 1)) / 2 <= n) {
        used_cubes += (level * (level + 1)) / 2;
        height++;
        level++;

    }
    cout << height << endl;
    return 0;
}

