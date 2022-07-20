// https://projecteuler.net/problem=3

#include <iostream>

int main()
{
	long long numerator = 600851475143ll;
	long long result;
	for (long long t = 2; t <= numerator; t++) {
		if (numerator % t == 0) {
			result = numerator / t;
			for (long long i = 2; i < result; i++) {
				if (result % i == 0) {
					result = 0;
					break;
				}
			}
			if (result != 0) {
				break;
			}
		}
	}
	std::cout << result;
	system("pause>nul");
	return 0;
}