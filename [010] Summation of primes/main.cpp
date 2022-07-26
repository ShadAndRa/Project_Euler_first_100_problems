// https://projecteuler.net/problem=10

#include <iostream>

unsigned long long sumOfPrimes(unsigned top) {
	unsigned long long sumOfPrimes = NULL;
	unsigned p = 2;
	int* nums = new int[top + 1];
	nums[0] = 0;
	nums[1] = 0;
	for (unsigned int i = 2; i <= top; i++) {
		nums[i] = i;
	}
	for (p = 2; p*p <= top;) {
		for (int i = p; i * p <= top; i++) {
			nums[i * p] = 0;
		}
		p++;
		for (p; nums[p] == 0; p++);
	}
	for (int i = 0; i <= top; i++) {
		sumOfPrimes += nums[i];
	}
	return sumOfPrimes;
}

int main()
{
	std::cout << sumOfPrimes(2000000);
	return 0;
}