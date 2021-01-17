/*
*      File Name: Else_if_statement.c
*      Date:24/12/2020
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*/

/* Description: C program to checking condition. */

#include<stdio.h>

int main ()
{
	int a, b;
	printf ("Enter the numbers: \n");
	scanf ("%d", &a);
	scanf ("%d", &b);

	if (a>b)
	{
		 printf ("a is greater\n");
	}
	else if (a<b)
	{
		printf ("b is greater\n");
	}
	else 
	{
		printf ("a and b is equal\n");
	}
	return 0;
}
