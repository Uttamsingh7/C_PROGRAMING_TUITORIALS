/*
*      File Name: Printin_all_odd_numbers.c
*      Date:22/12/2020
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*/

/* Description: C program to printing all odd numbers 1 to 100. */

#include <stdio.h>
int main ()
{
	int a;
	for(int a= 0; a<=100; a++)
	{if (a%2 !=0)
		{printf ("%d\n", a);
		}
	}
	return 0;
}
