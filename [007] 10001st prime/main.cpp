// https://projecteuler.net/problem=7

#include <iostream>

unsigned long long findPrime(int n) {
	if (n == 1)
		return 2;
	if (n == 2)
		return 3;
	unsigned long long prime = 5ull;
	for (int i = 3; i < n;i++) {
		prime += 2;
		for (int j = 3; j <= prime / 2; j += 2) {
			if (prime % j == 0) {
				prime += 2;
				j = 1;
			}
		}
	}
	return prime;
}

int main() {
	std::cout << findPrime(10001) << std::endl;
	system("pause>nul");
	return 0;
}