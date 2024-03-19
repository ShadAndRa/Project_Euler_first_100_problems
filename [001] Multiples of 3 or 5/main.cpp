// https://projecteuler.net/problem=1

#include <iostream>

int sumDivisibleByNLessThenT(int num, int target);

int main() {
	
	int n1 = 3;
	int n2 = 5;
	int result = 0;

	result += sumDivisibleByNLessThenT(n1, 1000);
	result += sumDivisibleByNLessThenT(n2, 1000);
	result -= sumDivisibleByNLessThenT(n1 * n2, 1000);

	std::cout << result;
	return 0;
}

int sumDivisibleByNLessThenT(int num, int target) {
	target -= 1;
	int p = target / num;
	return num * (p * (p + 1)) / 2;
}