#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char%lu\n", sizeof(char));
	printf("size of a int%lu\n", sizeof(int));
	printf("size of a long int%lu\n", sizeof(long));
	printf("size of a long long int%lu\n", sizeof("%lld"));
	printf("size of a float%lu", sizeof(float));
	return (0);
}



