#include<stdio.h>

int main(int argc, char*  argv[])
{
	int num, *p;
	printf("Program to demonstrate pointers\n");
	printf("Enter the value for num\n");
	scanf("%d", &num);
	printf("The number you entered is: %d\n", num);
	printf("The addres of num is: %p\n", &num);
	printf("Now the pointer \"p\" will be pointing to num");
	*p = num;
	printf("*p = %d,\tp = %p,\t&p = %p\n", *p, p, &p);
	/*
	 * Note: if you use p = &num, the value of p and &num will be the same.
	 * Meaning, the the pointer "p" refers to the address of num.
	 * But if you use *p = num, the pointer "p" will not have the address of num.
	 * Because...
	 */
	return 0;
}
