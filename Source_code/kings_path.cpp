#include<bits/stdc++.h>

using namespace std;

// Directions in which the king can move (up, down, left, right, diagonals)
int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};

// Function to solve the problem
int bfs(int x0, int y0, int x1, int y1, map<int, vector<pair<int, int>>> &allowed_cells) {
    queue<pair<int, int>> q;
    map<pair<int, int>, int> dist;  // To store the minimum distance to each cell

    q.push({x0, y0});
    dist[{x0, y0}] = 0;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        // Check if we have reached the destination
        if (x == x1 && y == y1)
            return dist[{x, y}];

        // Explore all 8 directions (king's moves)
        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            // Check if the next position is within allowed cells
            if (allowed_cells.find(nx) != allowed_cells.end()) {
                for (auto segment : allowed_cells[nx]) {
                    if (ny >= segment.first && ny <= segment.second && dist.find({nx, ny}) == dist.end()) {
                        q.push({nx, ny});
                        dist[{nx, ny}] = dist[{x, y}] + 1;
                    }
                }
            }
        }
    }
    // If there's no path to the destination
    return -1;
}

int main() {
    int x0, y0, x1, y1;
    cin >> x0 >> y0 >> x1 >> y1;

    int n;
    cin >> n;

    // Map to store the allowed segments in each row
    map<int, vector<pair<int, int>>> allowed_cells;

    for (int i = 0; i < n; i++) {
        int r, a, b;
        cin >> r >> a >> b;
        allowed_cells[r].push_back({a, b});
    }

    // Call the BFS function to find the shortest path
    int result = bfs(x0, y0, x1, y1, allowed_cells);

    cout << result << endl;

    return 0;
}

