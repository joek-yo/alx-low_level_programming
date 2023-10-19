#include "main.h"

/**
 * print_number - Print an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	n1 = (n < 0) ? -n : n;

	if (n < 0)
	{
		_putchar('-');
	}
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
