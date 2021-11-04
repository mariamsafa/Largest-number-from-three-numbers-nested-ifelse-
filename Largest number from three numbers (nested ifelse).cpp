#include<stdio.h>
int main()
{
	int a, b, c;
	printf_s("Input three numbers:\n");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
			printf_s("%d is the largest number\n", a);
		else
			printf_s("%d is the largesat number\n", c);
	}//end of if
	else
	{
		if (b > c)
			printf_s("%d is the largest number\n", b);
		else
			printf_s("%d is the largest number\n", c);
	}//end of else
}