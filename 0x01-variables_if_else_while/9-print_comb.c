#include <stdio.h>

/**
 * main -prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		/**
		 * converts the integer 0–9 to its ASCII character
		 * so putchar can print it as a digit
		 */
		putchar(number + '0');

		/* print comma and space only if number is NOT 9 */
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
