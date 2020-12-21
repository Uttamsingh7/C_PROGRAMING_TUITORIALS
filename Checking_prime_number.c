/*
*      File Name: Checking_the_number_prime.c
*      Date: 22/12/2020
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*/

/* Description: C program to checking whether entered number is prime or not*/

#include<stdio.h>
#include<stdbool.h>

int main()
{
	int num;
	int i;
	bool prime= true;
	printf("Enter the number:");
	scanf("%d", &num);
	for (i=2; i<num; i++)
	{
		if (num%i ==0)
		{
			prime =false;
		}
	}
	if (prime==false)
	{
		printf ("Entered number is not a prime number\n");
	}
	else
	{
		printf("Entered number is a prime number\n");
	}

	return 0;
}
