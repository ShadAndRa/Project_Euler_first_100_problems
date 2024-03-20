// https://projecteuler.net/problem=3

#include <iostream>
#include <cmath>

int isPrime(int num);

int main() {
	long long devidend = 600851475143ll;
	int numSqrt = sqrt(devidend);
	for (int devisor = 3; devisor <= numSqrt; devisor += 2) {
		if (isPrime(devisor)) {
			if (devidend % devisor == 0) {
				if (devidend == devisor)
					break;
				devidend /= devisor;
			}
		}
	}
	std::cout << devidend;
	return 0;
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