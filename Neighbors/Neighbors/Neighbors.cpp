#include <iostream>
#include <vector>
using namespace std;

bool isValidNeighbor(int x, int y, int N, int M) {
    return (x >= 0 && x < N && y >= 0 && y < M);
}

bool checkNeighbors(const vector<vector<char>>& grid, int X, int Y, int N, int M) {
    // Define the possible directions for the neighbors
    vector<pair<int, int>> directions = { {-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1} };

    for (auto direction : directions) {
        int newX = X + direction.first;
        int newY = Y + direction.second;
        if (isValidNeighbor(newX, newY, N, M)) {
            if (grid[newX][newY] != 'X') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<char>> grid(N, vector<char>(M));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> grid[i][j];
        }
    }

    int X, Y;
    cin >> X >> Y;

    // Adjusting for 0-based index
    X--;
    Y--;

    if (checkNeighbors(grid, X, Y, N, M)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}
