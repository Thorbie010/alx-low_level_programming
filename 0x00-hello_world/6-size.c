#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%lusize of a char\n", sizeof(char));
	printf("%lusize of a int\n", sizeof(int));
	printf("%lusize of a long int\n", sizeof(long));
	printf("%lu\nsize of a long long int", sizeof("%lld"));
	printf("%lusize of a float", sizeof(float));
	return (0);
}



