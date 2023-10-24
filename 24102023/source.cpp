#include <iostream>
int main() {

	/*
	Вычислить сумму и произведение цифр целого числа введенного пользователем и потои перевести в двочную запись
	*/


	unsigned int n;
	std::cin >> n;
	unsigned int sum = 0;
	unsigned int mult = 1;
	unsigned int x = n;
	while (x != 0) {
		int digit = x % 10;
		sum += digit;
		mult *= digit;
		x = x/10;
	}
	std::cout << sum << " " << mult << std::endl;
	
	x = n;

	unsigned int k2 = 1;
	
	while (k2 <= n) {
		k2 *= 2;
	}
	
	k2 /= 2;
	
	if (k2 == 0) {
		std::cout << "0";
	}

	while (k2 != 0) {
		if (x >= k2) {
			std::cout << "1";
			x -= k2;
		}
		else {
			std::cout << "0";
		}
		k2 /= 2;
	}
	std::cout << std::endl;
	std::system("pause");
	return 0;
}
