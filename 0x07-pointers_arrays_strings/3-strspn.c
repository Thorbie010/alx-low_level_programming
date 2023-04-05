#include "main.h"

/**
 * _strspn - entry point
 * @s: first string
 * @accept: second string
 * Return: len
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len, i;

	len = 0;
	for (; s[len]; len++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[len] == accept[i])
				break;
		}
		if (!accept[i])
			break;
	}
	return (len);

}
