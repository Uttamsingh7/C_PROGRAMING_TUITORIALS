#include<stdio.h>
int main()
{
	int num1, num2;
	int result;

	printf("Enter the numbers num1, num2:");
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	result = num1 * num2;
	printf("Result num1=%d,num2=%d is %d\n", num1, num2, result);

	return 0;
}
