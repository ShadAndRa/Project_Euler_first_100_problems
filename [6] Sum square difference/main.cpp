// https://projecteuler.net/problem=6

#include <iostream>

unsigned long long sumSquareDifference(int n) {
	unsigned long long result = 0ull;
	for (int i = 1; i < n; i++) {
		for (int j = i + 1; j <= n; j++) {
			result += i * j;
		}
	}
	result *= 2;
	return result;
}

int main()
{
	std::cout << sumSquareDifference(10) << std::endl;
	system("pause>nul");
	return 0;
}