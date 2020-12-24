#include<stdio.h>

int main ()
{
	int a[10];
	int i;
	int sum = 0;
	for (i=0; i<10; i++)
	{
		printf ("Enter the numbers in index: ");
		scanf ("%d\n", &a[i]);
	}
	for(i =0; i<10; i++ )
	{
		sum = sum + a[i];
	}
	printf ("Sum of array elements= %d", sum);

	return 0;
}
