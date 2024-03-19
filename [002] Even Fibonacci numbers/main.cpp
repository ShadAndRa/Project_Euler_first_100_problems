// https://projecteuler.net/problem=2

#include <iostream>

int main() {
	int result = 0;
	int i = 2, j = 0, k = 0;
	for (i; i < 4000000; i = 4 * i + j) {
		j = k;
		k = i;
		if (i % 2 == 0)
			result += i;
	}
	std::cout << result;
	return 0;
}