/*
*      File Name: Arithmatic_operators.c
*
*      Date: 29/01/2021
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*/

/* Description: these are the arithmatic operators


		*,/,%,+ and -
		
		(*, /, %) same priority
		(+, -) same priority 

		priority of *,/ and % operators more than the + and - operators
		if in the operation operators have same priority then we calculate
		left to right */


#include<stdio.h>
int main ()
{
int x= 5*10/2%3;		//same priority operatio perform left to right
int y= 3+5-98+8;		// same priority operatio left to right

int z= 5*8+9-23/2%3;		//operation perform left to right  priority wise

printf ("X is =%d\n Y is =%d\n Z is =%d\n",x,y,z);
return 0;
}
