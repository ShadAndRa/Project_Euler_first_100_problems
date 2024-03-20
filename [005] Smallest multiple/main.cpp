// https://projecteuler.net/problem=5

#include <iostream>
#include <cmath>

int isPrime(int num);

int main() {
	int target = 20;
	double trgLn = log(target);
	int result = 1;
	
	for (int i = 2; i <= target; i++)
		if (isPrime(i))
			result *= pow(i, (int)(trgLn / log(i)));

	std::cout << result;
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