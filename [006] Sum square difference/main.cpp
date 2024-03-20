// https://projecteuler.net/problem=6

#include <iostream>

int sumSquareDifference(int n);
int sumOfSquares(int n);
int squareOfSum(int n);

int main() {
	std::cout << sumSquareDifference(100);
	return 0;
}

int sumSquareDifference(int n) {
	return squareOfSum(n) - sumOfSquares(n);
}

int sumOfSquares(int n) {
	return n * (2 * n + 1) * (n + 1) / 6;
}

int squareOfSum(int n) {
	return (n * (n + 1) / 2) * (n * (n + 1) / 2);
}