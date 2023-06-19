#include "main.h"

/**
 * _memset - function to replace a pointer with a given char for ntime
 * @s: pointer address
 * @b: to replace values in pointer
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *tmp;
	unsigned int i;

	tmp = s;
	i = 0;
	for (; i < n; i++)
	{
		*tmp = b;
		tmp++;
	}
	return (s);
}
