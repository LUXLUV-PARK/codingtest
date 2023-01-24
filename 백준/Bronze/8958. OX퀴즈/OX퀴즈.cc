#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int num, re, a;
	char ox[80];
	std::cin >> a;
	for (int i = 0; i < a; i++)
	{
		num = 0;
		re = 0; 
		std::cin >> ox;
		for (int j = 0; j < strlen(ox); j++)
		{
			if (ox[j] == 'O')
			{
				num++;
				re += num;
			}
			else if (ox[j] == 'X')
			{
				num = 0;
			}
		}
		std::cout << re << endl;
	}
}