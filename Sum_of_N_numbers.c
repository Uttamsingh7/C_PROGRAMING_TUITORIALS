/*
*      File Name: Sum_of_first_N_numbers.c
*      Date:17/01/2021
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*/

/* Description: C program to print Sum of first N numbers. */

#include<stdio.h>
int main ()
{
	int sum=0, i, num;
	printf("Enter a number:\n");
	scanf ("%d", &num);

	for (i=1; i<=num; i++)
	{
		sum = sum +i;
	}
	printf ("Sum is = %d\n",sum);

	return 0;
}
