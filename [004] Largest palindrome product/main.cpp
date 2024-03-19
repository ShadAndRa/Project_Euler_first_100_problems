// https://projecteuler.net/problem=4

#include <iostream>

int numRevers(int);

int main() {
	int palindrome = 0;
	int product;
	for (int i = 1000; i > 99; i--)
		for (int j = i; j > 99; j--) {
			product = i * j;
			if (product == numRevers(product))
				if (product > palindrome)
					palindrome = product;
		}
	std::cout << palindrome;
	return 0;
}

int numRevers(int num)  {
	int revNum = 0;
	while (num) {
		revNum = revNum * 10 + num % 10;
		num /= 10;
	}
	return revNum;
}