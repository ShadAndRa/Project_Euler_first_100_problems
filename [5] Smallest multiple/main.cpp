// https://projecteuler.net/problem=5

#include <iostream>

int main()
{
	int result = 20;
	while (true) {
		if (result % 3 == 0 && result % 6 == 0 && result % 7 == 0 && result % 8 == 0 && result % 9 == 0 && result % 11 == 0 &&
			result % 12 == 0 && result % 13 == 0 && result % 14 == 0 && result % 15 == 0 && result % 16 == 0 && result % 17 == 0 &&
			result % 18 == 0 && result % 19 == 0 && result % 20 == 0)
			break;
		result += 20;
	}
	std::cout << result;
	system("pause>nul");
	return 0;
}