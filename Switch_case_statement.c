/*
 *      File Name: Switch_case_statement.c
 *      Date:24/12/2020
 *
 *      Tuitor: Uttam Kumar 
 *
 *      Email Id: uttambsdc2@gmail.com
 */

/* Description: C program to checking conditional statement. */

#include<stdio.h>

int main()

{
	int day_no;
	printf ("Enter the day number :");
	scanf ("%d", &day_no);

	switch (day_no)
	{
		case 0:
			printf ("Sunday\n");
			break;
		case 1:
			printf ("Monday\n");
			break;
		case 2:
			printf ("Tuesday\n");
			break;
		case 3:
			printf ("Wednesday\n");
		case 4:
			break;
			printf ("Thursday\n");
			break;
		case 5:
			printf ("Friday\n");
			break;
		case 6:
			printf ("Saturday\n");
			break;
		default:
			printf ("Entered invalid day number\n");
	}

	return 0;
}
