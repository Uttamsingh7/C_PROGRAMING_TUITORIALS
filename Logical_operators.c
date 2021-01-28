/*
*      File Name:Logical_oprators.c
*
*      Date:29/01/2021
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*
*
*  Description: Logical oprators
*		
*		NOT operator	!	perform on only 1 oprands.
*		AND operator	&&	perform on two oprands.
8		OR operator	||	perform on two oprands.
*
*		! -- inverts the truth value of satatement.
*		&& -- if both statements are true then return 1 otherwise return 0.
*		|| -- if any one of statement is true then return 1.
*/


#include<stdio.h>
int main ()
{
int x,y=9;
int a,b=5;
int p,q=10;

x= !y>8;		//y>8 true(1) !y means !1 is 0 then value assigned to x is=0
a= b>2 && b<6;
p= q<11 || q>100;

printf ("%d %d %d\n",x,a,p);
return 0;
}
