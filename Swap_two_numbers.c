/*
*      File Name:Swap_two_number.c
*      Date:26/01/2021
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*/

/* Description: C program to swap two numbers. */

#include<stdio.h>
int main()
{
	int a,b,c;
	printf ("Enter two numbers\n");
	scanf("%d%d",&a,&b);

	c=a;
	a=b;
	b=c;
	printf ("%d %d\n", a,b);

	return 0;
}
