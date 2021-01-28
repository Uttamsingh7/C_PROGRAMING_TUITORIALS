/*
	File name: Swap_2_numbers_using_function_pointer.c
*      Date:28/01/2021

*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*/

/* Description: C program to print swaped number. */

#include<stdio.h>
void swap (int*, int*);
int main ()
{
	int a, b;
	printf ("Enter two numbers:\n");
	scanf ("%d%d",&a, &b);

	swap (&a,&b);
	return 0;
}
void swap (int *p,int *q)
{
	int r;
	r=*p;
	*p=*q;
	*q=r;

	printf ("%d %d\n", *p,*q);
}
