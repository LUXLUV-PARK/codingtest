#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0;
	std::cin >> a >> b;
	std::cout << a + b << endl;
	std::cout << a - b << endl;
	std::cout << a * b << endl;
	std::cout << fixed;
	std::cout.precision(0);
	std::cout << a / b << endl;
	std::cout << a % b << endl;

	return 0;
}