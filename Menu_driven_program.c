/*
*      File Name: Menu_driven_pprogram.c
*      Date:17/01/2021
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*/

/* Description: C program to choose menu according to operataion */

#include <stdio.h>

int main()
{
	int choice,i, k,sum;

	printf ("\n1. Addition of two numbers");
	printf ("\n2. Odd-even");
	printf ("\n3. To print N numbers");

	printf ("\nEnter your choice");
	scanf ("%d", &choice);

	switch (choice)
	{
		case 1:
			{
				printf ("You choose Addition of two numbers:\n");
				printf ("So,enter two numbers");
				scanf ("%d %d",&i, &k);
				sum=i+k;
				printf ("Sum of two numbers is %d\n",sum);
			}
			break;

		case 2:
			{
				printf ("You choose Odd-even\n");
				printf ("Enter a number:\n");
				scanf ("%d", &i);
				if (i%2==0)
				{
					printf("Entered number is even\n");
				}
				else
				{
					printf ("Entered number is Odd number\n");
				}
			}
			break;

		case 3:
			{
				printf ("You choosed to print n numbers\n");
				printf ("Enter a number:\n");
				scanf ("%d",&i);
				for (k=1; k<i; k++)
				{
					printf ("%d\n",k);
				}
			}
			break;
		default:
			{
				printf ("Invalid input");
			}
	}

	return 0;
}
