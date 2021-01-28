/*
*      File Name: Bitwise_operators.c
*
*      Date:29/01/2021
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*/

/* Description: Bitwise operators -- bitwise operator perform operation at bit(binary o and 1) level.
				Type of bitwise oprator
				Bitwise AND 	&
				Bitwise OR	|
				Bitwise XOR	^
				Bitwise NOT	~
				Left shift	>>
				Right shift	>>
 */


#include<stdio.h>
int main ()
{
int a,b,c,d,e,f;

a= 5&9;
b= 5|9;
c= 5^9;
d= ~17;
e= 9>>1;
f= 9<<1;

printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\nf=%d\n",a,b,c,d,e,f);

return 0;
}
