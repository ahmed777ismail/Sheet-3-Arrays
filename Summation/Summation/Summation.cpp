#include <iostream>
#include <vector>
#include <cmath> // for abs function

int main() {
	int N;
	std::cin >> N;

	std::vector<int> A(N);
	long long sum = 0; // using long long to avoid overflow

	for (int i = 0; i < N; ++i) {
		std::cin >> A[i];
		sum += A[i];
	}

	std::cout << std::abs(sum) << std::endl;

	return 0;
}
