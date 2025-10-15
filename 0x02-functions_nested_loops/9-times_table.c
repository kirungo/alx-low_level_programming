#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int row, col, result;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			result = row * col;

			/* Print a comma and space before numbers (except the first one) */
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			/* Add spacing so table columns align */
			if (result < 10 && col != 0)
				_putchar(' ');

			/* Print the actual digits */
			if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
