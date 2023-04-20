#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: variable integers passed
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list args;


	va_start(args, n);

	for (; i < n; i++)
	{
		if (separator != NULL && i > 0)
			printf("%s", separator);
		printf("%d", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
