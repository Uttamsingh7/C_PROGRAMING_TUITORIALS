/*
*      File Name: Printin_all_even_numbers.c
*      Date:22/12/2020
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*/

/* Description: C program to printing all even numbers 1 to 100. */


#include<stdio.h>

int main()

{
	int i;
	for(int i=1; i<100; i++)
	{if (i%2==0)
		 {

			     printf ("%d\n", i);
		 }
	}


	return 0;

}
