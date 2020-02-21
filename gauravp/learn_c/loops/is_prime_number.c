#include<stdio.h>
#include<math.h>

int main(int argc, char* argv)
{
	int i, number, is_prime=1;
	printf("Enter a number\n");
	scanf("%d", &number);
	
	if (number == 0)
	{
		printf("0 is not a prime number");
		return 0;
	}

	if (number == 1)
	{
		printf("1 is NOT a Prime number\n", number);
		return 0;
	}

	for(i=2; i<=sqrt(number);i++)
	{
		if (number % i == 0)
		{
			printf("%d is NOT a prime number\n", number);
			is_prime=0;
			break;
		}
	}

	if (is_prime)
		printf("%d is not a prime number\n", number);
	return 0;
}

/* NOTE for LINUX users
 *
 * If you are using Unix/Linux systems, then compile this code as:
 * gcc is_prime_number.c -o is_prime_number -lm
 *
 * The -lm is used to compile the "math.h" library.
 */

