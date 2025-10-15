#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to check
 *
 * Return: the absolute value of n
 */

int _abs(int count_from_zero)
{
	if (count_from_zero < 0)
	{
		return (-count_from_zero);
	}
	else
	{
		return (count_from_zero);
	}
}
