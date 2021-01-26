/*
*      File Name: Square_and_cube_using_function.c

	Date:26/01/2021
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*/

/* Description: C program to print square and cube of a number. */

#include <stdio.h>
int main()
{

	int square(int);	//function  declaration
	int cube(int);
	int s, c,i;

	printf ("Enter a number:\n");
	scanf("%d",&i);
	s=square(i);		//Function call
	c=cube(i);		//Function call

	printf ("Square is =%d\nCube is =%d\n",s,c);
	return 0;
}
	int square(int a)	//Function definition
	{
	return(a*a);
	}
	int cube(int b)		//Function definition
	{
	return (b*b*b);
	}
	
