#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int N;
    std::cin >> N;

    std::vector<std::vector<int>> matrix(N, std::vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < N; ++i) {
        primaryDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][N - 1 - i];
    }

    int difference = std::abs(primaryDiagonalSum - secondaryDiagonalSum);
    std::cout << difference << std::endl;

    return 0;
}
