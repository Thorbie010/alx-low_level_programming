#include "main.h"

/**
 * print_integer - A function to priting n
 * @n: an input unsigned integer
 * Return: Nothing
 */
void print_int(int n)
{
        int i = 1000000000;

        for (; i >= 1; i /= 10)
                if (n / i != 0)
                {
                        _putchar((n / i) % 10 + '0');
                }
}
