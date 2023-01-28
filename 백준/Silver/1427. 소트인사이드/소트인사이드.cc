#include <iostream>
#include <string.h>
#include <cmath>
#include<algorithm>

using namespace std;

bool compare(int x, int y)
{
	return x > y;
}

int main()
{
	int num, num_count = 0;
	int N[10];
	int i = 0;
	std::cin >> num;
	while (num > 0)
	{
		N[i] = num % 10;
		num /= 10;
		num_count++;
		i++;
	}

	sort(N, N+num_count, compare);

	for (int j = 0; j < num_count; j++)
	{
		std::cout << N[j];
	}
}