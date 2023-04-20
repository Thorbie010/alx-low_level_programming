#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - entry point
 * @n: number of args
 * @...: variable parable parameters
 * Return: result or 0 if n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;

	va_list args;
	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		result += va_arg(args, int);

	va_end(args);

	return (result);
}
