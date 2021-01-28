/*
*      File Name: Realtional_oprators.c
*      Date: 29/01/2021
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttamb	dc2@gmail.com
*/

/* Description: relational operators - basically used to check relation between two oprands
		Priority wise list of relational operators
		less than  		<
		greater than		>
		less than equal to	<=
		greater than equal to	>=
		equal to		==
		not eqaul to 		!=

		(<, >, <=, >=) 	frst and same priority
		(==, !=) 	second and same priority

		if relation(condition) is true then it's return value= 1
		if relation (condition) is false then it's return value= 0
*/

#include <stdio.h>
int main ()
{
	int a,b,c,d,e,f;

	a= 3>2;
	b= 3<2;
	c= 3>=2;
	d= 3<=2;
	e= 5==5;
	f= 5!=5;

	printf ("\n%d %d %d %d  %d %d \n",a,b,c,d,e,f);

	return 0;
}
