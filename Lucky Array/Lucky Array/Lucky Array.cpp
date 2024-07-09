#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    int minElement = *std::min_element(A.begin(), A.end());
    int minFrequency = std::count(A.begin(), A.end(), minElement);

    if (minFrequency % 2 != 0) {
        std::cout << "Lucky" << std::endl;
    }
    else {
        std::cout << "Unlucky" << std::endl;
    }

    return 0;
}
