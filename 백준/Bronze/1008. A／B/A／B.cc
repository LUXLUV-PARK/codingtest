#include <iostream>

using namespace std;

int main()
{
	double a = 0, b = 0;
	std::cin >> a >> b;
	std::cout << fixed;
	std::cout.precision(9);
	std::cout << a / b;

	return 0;
}