#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char:\t%lu\n", sizeof(char));
	printf("size of a int:\t%lu\n", sizeof(int));
	printf("size of a long int:\t%lu\n", sizeof(long));
	printf("size of a long long int:\t%lu\n", sizeof("%lld"));
	printf("size of a float:\t%lu", sizeof(float));
	return (0);
}



