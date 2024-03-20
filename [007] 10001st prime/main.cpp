// https://projecteuler.net/problem=7

#include <iostream>
#include <cmath>

int findPrime(int n);
int isPrime(int num);

int main() {
	std::cout << findPrime(10001);
	return 0;
}

int findPrime(int n) {
	if (n == 1)
		return 2;
	if (n == 2)
		return 3;
	int prime = 5;
	for (int i = 3; i < n; i++) {
		prime += 2;
		while (!isPrime(prime)) {
			prime += 2;
		}
	}
	return prime;
}

int isPrime(int num) {
	if (num < 2)
		return 0;
	if (num < 4)
		return 1;
	if (num % 2 == 0)
		return 0;
	if (num < 9)
		return 1;
	if (num % 3 == 0)
		return 0;
	int sqN = sqrt(num);
	int f = 5;
	while (f <= sqN) {
		if (num % f == 0)
			return 0;
		if (num % (f + 2) == 0)
			return 0;
		f += 6;
	}
	return 1;
}