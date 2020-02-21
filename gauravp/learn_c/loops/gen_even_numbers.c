#include<stdio.h>

int main(int argc, char* argv[])
{
	int lower_limit, upper_limit, num;
	printf("Enter the upper limit of your choice\n");
	scanf("%d", &upper_limit);
	for(lower_limit=0; lower_limit <= upper_limit; lower_limit++)
	{
		num = lower_limit;
		if (num % 2 == 0)
		{
			printf("%d, ", num);
		}
	}
	printf("\n");
	return 0;
}
