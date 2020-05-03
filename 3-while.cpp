#include <iostream>

int main() {
	std::cout << "enter number: " << std::endl;
	int number = 0;
	std::cin >> number;
	int a=0 , b = 1;

	while (a < number) {
		std::cout << a << std::endl;
		int temp = a;
		a = b;
		b = temp + b;
	}
	return 0;
}