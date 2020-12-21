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
		printf ("Entered number is not a prime number");
	}
	else
	{
		printf("Entered number is a prime number");
	}

	return 0;
}
