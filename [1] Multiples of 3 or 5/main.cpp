#include <iostream>

int main()
{
	int result = 0;
	for (int i = 3; i < 1000; i += 3) {
		result += i;
	}
	for (int i = 5; i < 1000; i += 5) {
		if (i % 3 == 0)
			continue;
		result += i;
	}
	std::cout << result;
	system("pause>nul");
	return 0;
}