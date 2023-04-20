#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/*
 * print_strings - function to print strings
 * @separator: string to br printed between strings
 * @n: number of strings passed to the function
 * @...: unknown strings to be passed
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	for (; i < n; i++)
	{
		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (va_arg(args, char*) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(args, char*));
	}
	printf("\n");
	va_end(args);
}
