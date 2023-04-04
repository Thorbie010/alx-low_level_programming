#include "main.h"

/**
 * _memcpy - function to copy one variable into another
 * @dest: 1st variable
 * @src: 2nd variable
 * @n: number of times
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *tmp;
	unsigned int i;

	tmp = dest;
	i = 0;

	for (; i < n; i++)
	{
		*tmp++ = *src++;
	}
	return (dest);


}
