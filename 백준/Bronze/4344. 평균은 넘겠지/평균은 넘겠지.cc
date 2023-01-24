#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

int main()
{
	int stu, a;
	double rat, avr, b;
	int score[1000];
	std::cin >> a;
	for (int i = 0; i < a; i++)
	{
		avr = 0;
		b = 0;
		std::cin >> stu;
		for (int j = 0; j < stu; j++)
		{
			std::cin >> score[j];
			avr += score[j];
		}
		avr = avr / stu;
		for (int k = 0; k < stu; k++)
		{
			if (avr < score[k])
			{
				b++;
			}
		}
		rat = b / stu * 100;
		rat = round(rat * 1000) / 1000;
		std::cout << fixed;
		std::cout.precision(3);
		std::cout << rat << "%" << endl;
	}
}