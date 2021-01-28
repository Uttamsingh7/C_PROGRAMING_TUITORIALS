/*
	File name: Swap_2_numbers_using_XOR_operator.c
*      Date: 28/01/2021
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*/

/* Description: C program to swap two numbers using XOR operator. */

#include<stdio.h>
int main()
{
	int a, b;
	printf ("Enter two numbers :\n");
	scanf ("%d%d", &a,&b);

	a=a^b;
	b=a^b;
	a=a^b;

	printf ("%d %d\n",a,b);
	return 0;
}
