/*
*      File Name: Division_of_two_numbers.c
*      Date: 16/12/2020
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*/

/* Description: C program to division of two numbers. */

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

