//WeirdAlgorithm1.cpp
//https://cses.fi/problemset/task/1068
#include <iostream>

int main() {
	long n = 0;
	std::cin >> n;
	std::cout << n << " ";
	while (n != 1) {
		if (n % 2 == 0) {
			n /= 2;
		}
		else {
			n = n * 3 + 1;
		}
		std::cout << n << " ";
	}
	std::cout << n;
}