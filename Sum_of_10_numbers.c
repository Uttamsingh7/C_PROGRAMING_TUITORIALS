/*
 *      File Name:  Sum_of_10_number.c
 *      Date: 24/12/2020
 *
 *      Tuitor: Uttam Kumar 
 *
 *      Email Id: uttambsdc2@gmail.com
 */

/* Description: C program to print sum of 10 integers using array. *  */

#include<stdio.h>

int main ()
{
	int a[10];
	int i, sum=0;

	printf ("Enter 10 numbers in index:\n");
	for (i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0; i<10; i++)
	{
		sum= sum+ a[i];
	}
	printf ("Sum of array elements is = %d\n",sum);
	return 0;
}
