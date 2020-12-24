/*
*      File Name: Adding_int_type_array.c.c
*      Date: 24/12/2020
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*/

/* Description: C program to print sum of int type array. */

#include<stdio.h>

int main ()
{
	int a[10];
	int i;
	int sum = 0;
	for (i=0; i<10; i++)
	{
		printf ("Enter the numbers in index: ");
		scanf ("%d\n", &a[i]);
	}
	for(i =0; i<10; i++ )
	{
		sum = sum + a[i];
	}
	printf ("Sum of array elements= %d", sum);

	return 0;
}
