#include "is_prime_function.h"

int main(int argc, char** argv)
{
	int number, is_prime_flag;
	printf("Enter the number to check if it is prime or composite:\n");
        scanf("%d", &number);
	is_prime_flag = is_prime_number(number);
	if (is_prime_flag == 1)
	{
		printf("The number %d is a prime number\n", number);
	}
	else if (is_prime_flag == 0)
	{
		printf("The number %d is a composite number\n", number);
	}
	return 0;
}
