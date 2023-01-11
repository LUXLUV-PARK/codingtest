#include <stdio.h>

int main()
{
	double num1, num2;
	scanf("%lf %lf", &num1, &num2);
	printf("%.9lf", num1 / num2);
}