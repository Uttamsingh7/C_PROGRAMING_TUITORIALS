#include<stdio.h>

int main()

{
	int num1, num2;
	float result;

	printf("Enter the numbers:\n");
	scanf("%d\n", &num1);
	scanf("%d", &num2);
	result= num1 / (float) num2;

	printf ("Result of num1=%d /  num2=%d is %f\n", num1, num2, result);

	return 0;	
}

