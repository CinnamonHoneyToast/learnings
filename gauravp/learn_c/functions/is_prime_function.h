#include<stdio.h>

int is_prime_number(int number)
{
	int i;

	if (number == 0)
	{
		printf("0 is neither prime nor composite\n");
		return 2;
	}

	if (number == 1)
	{
		return 0;
	}

	for(i=2; i<number; i++)
	{
		if(number % i == 0)
		{
			return 0;
		}
	}

	return 1;
}
