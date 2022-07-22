// https://projecteuler.net/problem=6

#include <iostream>
#include <thread>
#include <ctime>

unsigned long long sumSquareDifference(int beg, int end, int trueEnd) {
	unsigned long long result = 0ull;
	for (beg; beg < end; beg++) {
		for (int j = beg + 1; j <= trueEnd; j++) {
			result += beg * j;
		}
	}
	result *= 2;
	return result;
}

unsigned long long parallelTasks(int end) {
	unsigned long long result = 0ull;
	unsigned long long res1 = 0ull;
	unsigned long long res2 = 0ull;
	unsigned long long res3 = 0ull;
	unsigned long long res4 = 0ull;
	int b1, b2, b3, b4;
	int e1, e2, e3, e4;
	b1 = 1;
	e1 = end / 7.69;
	b2 = e1;
	e2 = b2 + end / 6.25;
	b3 = e2;
	e3 = b3 + end / 5;
	b4 = e3;
	e4 = end;
	std::thread t1([&]() {
		res1 = sumSquareDifference(b1, e1, end);
		});
	std::thread t2([&]() {
		res2 = sumSquareDifference(b2, e2, end);
		});
	std::thread t3([&]() {
		res3 = sumSquareDifference(b3, e3, end);
		});
	std::thread t4([&]() {
		res4 = sumSquareDifference(b4, e4, end);
		});
	t1.join();
	t2.join();
	t3.join();
	t4.join();
	result = res1 + res2 + res3 + res4;
	return result;
}

int main()
{
	std::cout << parallelTasks(100000) << std::endl;
	std::cout << clock();
	system("pause>nul");
	return 0;
}