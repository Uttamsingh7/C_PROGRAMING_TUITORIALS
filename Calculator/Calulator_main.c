/*
*      File Name: Calculator.c
*      Date:23/12/2020
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*/

/* Description: C program to implement Calculator. */

#include<stdio.h>
#include"addition.h"
#include"difference.h"
#include"division.h"
#include"multiply.h"

void main()
{
	int a=40, b=30;
	int sum;
	int prod;
	int diff;
	int div;
	sum = addition(a,b); 
	diff = difference(a,b);
	prod = multiply(a,b);
	div = division(a,b);
	printf("Sum = %d\n", sum);
	printf("diff = %d\n", diff);
	printf("prod = %d\n", prod);
	printf("div = %d\n", div);
}
