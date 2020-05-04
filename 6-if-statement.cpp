#include <iostream>


int main() {
	int currentVal = 0,val = 0;

	if (std::cin >> currentVal) {
		int increment = 1;
		while (std::cin >> val ) {
			if (val == currentVal) {

				increment += 1;

			}else{
				
				std::cout << "the number " << currentVal <<" occurs " << increment << std::endl;

				currentVal = val;

				increment = 1;
			}
		}
		std::cout << "the number " << currentVal <<" occurs " << increment << std::endl;
	}
	return 0;
}