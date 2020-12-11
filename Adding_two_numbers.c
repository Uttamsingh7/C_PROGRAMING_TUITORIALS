/*
*      File Name: Adding_two_numbers.c
*      Date:11/12/2020
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*/

/* Description: C program to add two numbers. */

#include<stdio.h>

void main()
{
	int num1, num2,sum;
	printf("Enter the numbers num1, num2:");
	scanf("%d", &num1);
	scanf("%d", &num2);
	sum = num1 + num2;
	printf ("sum of num1= %d, num2=%d is %d\n", num1, num2, sum);
}

