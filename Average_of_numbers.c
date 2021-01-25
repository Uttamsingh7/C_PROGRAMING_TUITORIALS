/*
*      File Name: Average_of_numbers.c

*	      Date:25/01/2021
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*/

/* Description: C program to print Average of N numbers */

#include<stdio.h>
int main()
{
	int  k, sum=0, i;

	printf ("How many number'you want to average?\n Enter the number");
	scanf ("%d",&k);
	int a[k];

	printf ("Enter %d numbers\n",k);

	for (i=0; i<k; i++)
	{
		scanf ("%d", &a[i]);
		sum = sum +a[i];
	}
	printf ("Sum is =%d\n",sum);
	printf ("\nAverage of numbers is =%f\n",(float)sum/k);

	return 0;

}
