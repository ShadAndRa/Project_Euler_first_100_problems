// https://projecteuler.net/problem=10

#include <iostream>
#include <cmath>

constexpr unsigned TARGET = 2000000;

int main() {
	unsigned limit = sqrt(TARGET);
	unsigned long long sumOfPrimes = 0;
	static bool nums[TARGET];
	for (unsigned i = 0; i < TARGET; i++) {
		nums[i] = true;
	}
	nums[0] = false;
	nums[1] = false;
	for (unsigned p = 2; p <= limit;) {
		for (int i = p; i * p < TARGET; i++) {
			nums[i * p] = false;
		}
		p++;
		for (p; nums[p] == false; p++);
	}
	for (unsigned int i = 0; i < TARGET; i++) {
		if (nums[i]) {
			sumOfPrimes += i;
		}
	}
	std::cout << sumOfPrimes;
	return 0;
}