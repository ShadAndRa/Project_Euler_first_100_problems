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
	for (int i = 2; i < num; i++)
		if (num % i == 0)
			return 0;

	return 1;
}