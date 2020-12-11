/*
*      File Name: Hello_world.c
*      Date:10/12/2020
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*/

/* Description: C program to Substract two numbers. */

#include<stdio.h>

void main()
{
	int num1, num2, diff;

	printf("Enter the numbers num1, num2: ");
	scanf ("%d", &num1);
	scanf ("%d", &num2);

	diff= num1 - num2;

	printf("Differnce of num1=%d, num2=%d is %d\n", num1, num2, diff);
}
