// https://projecteuler.net/problem=9

#include <iostream>

int tripleProductSearch(int num) {
	for (int n = 3; n <= num / 1; n++)
		if (num % n == 0)
			for (int i = 2; i < n - 2; i++)
				for (int j = 1; j < i; j++)
					for (int k = 1; k < j; k++)
						if (k + j + i == n)
							if (k * k + j * j == i * i)
								return (k * (num / n) * j * (num / n) * i * (num / n));
}

int main()
{
	std::cout << tripleProductSearch(1000);
	return 0;
}