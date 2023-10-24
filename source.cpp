#include <iostream>
int main() {
	int n;
	std::cin >> n;
	int count = 0;
	int top = n;
	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;

		}
		else {
			n = n * 3 + 1;
		}
		count += 1;
			if (n > top) {
				top = n;
		}
		
	}
	std::cout << count << " " << top << std::endl;
	std::system("pause");
	return 0;

}
