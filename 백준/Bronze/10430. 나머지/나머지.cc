#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	std::cout << (a + b) % c << endl;
	std::cout << ((a % c) + (b % c)) % c << endl;
	std::cout << (a * b) % c << endl;
	std::cout << ((a % c) * (b % c)) % c << endl;
}