#include<stdio.h>

void main()
{
	int num1, num2, diff;

	printf("Enter the numbers num1, num2: ");
	scanf ("%d", &num1);
	scanf ("%d", &num2);

	diff= num1 - num2;

	printf("differnce of num1=%d, num2=%d is %d", num1, num2, diff);
}
