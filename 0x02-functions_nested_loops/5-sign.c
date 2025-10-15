#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 if n is positive,
 *	0 if n is zero,
 *	-1 if n is negative
 */

int print_sign(int n)
{
	char sign;

	if (n > 0)
	{
		sign = '+';
		_putchar(sign);
		return (1);
	}
	else if (n == 0)
	{
		sign = '0';
		_putchar(sign);
		return (0);
	}
	else /* n < 0)*/
	{
		sign = '-';
		_putchar(sign);
		return (-1);
	}
	return (0);
}
