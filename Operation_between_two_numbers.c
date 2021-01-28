/*
*      File Name: Operation_between_two_numbers.c
*      Date:28/01/2021
*
*      Tuitor: Uttam Kumar 
*
*      Email Id: uttambsdc2@gmail.com
*/

/* Description: C program to perform operation between two numbers like-
 addition, substractio, mltiplication,division and find remender. */

#include <stdio.h>
void Add (int, int);
void Subs (int, int);
void Product (int, int);
void Div (int, int);
void Remender (int, int);

int main ()
{
int a,b;

printf ("Enter two numbers:\n");
scanf ("%d%d",&a,&b);

Add (a,b);
Subs (a,b);
Product (a,b);
Div (a,b);
Remender (a,b);

return 0;
}
void Add (int i,int j)
{
printf ("Addition is = %d\n",i+j);
}
void Subs (int m, int n)
{
printf ("Difference is = %d\n",m-n);
}
void Product (int c, int d)
{
printf ("Product is = %d\n",c*d);
}
void Div (int q, int w)
{
printf ("Division is = %f\n",q/(float)w);
}
void Remender (int r,int s)
{
printf ("Remender is = %d\n", r%s);
}
