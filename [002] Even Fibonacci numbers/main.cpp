// https://projecteuler.net/problem=2

#include <iostream>

int main()
{
	int result = 0;
	int i = 1, j = 0, k = 1;
	for (i; i < 4000000; i += j) {
		j = k;
		k = i;
		if (i % 2 == 0)
			result += i;
	}
	std::cout << result;
	system("pause>nul");
	return 0;
}