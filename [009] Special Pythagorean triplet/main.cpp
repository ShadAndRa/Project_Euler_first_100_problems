// https://projecteuler.net/problem=9

#include <iostream>

#define TARGET 1000

int tripleProductSearch(int num) {
	for (int n = 6; n <= num; n++)
		if (num % n == 0)
			for (int i = 3; i < n - 2; i++)
				for (int j = 2; j < i; j++)
					for (int k = 1; k < j; k++)
						if (k + j + i == n)
							if (k * k + j * j == i * i)
								return (k * (num / n) * j * (num / n) * i * (num / n));
}

int main() {
	std::cout << tripleProductSearch(TARGET);
	return 0;
}