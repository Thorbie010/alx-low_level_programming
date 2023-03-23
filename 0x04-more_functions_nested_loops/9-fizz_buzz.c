#include <stdio.h>

/**
 * main - print fizz for multiples of 3
 * buzz for multiple of 5
 * and FizzBuzz for multiples of both 5 and 3
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if	(i % 3 ==  0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
