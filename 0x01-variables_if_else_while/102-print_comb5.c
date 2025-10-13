#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_number, second_number;

	for (first_number = 0; first_number <= 98; first_number++)
	{
		for (second_number = first_number + 1; second_number <= 99; second_number++)
		{
			putchar(first_number / 10 + '0');  /* tens of first number */
			putchar(first_number % 10 + '0');  /* units of first number */
			putchar(' ');                      /* space between numbers */
			putchar(second_number / 10 + '0'); /* tens of second number */
			putchar(second_number % 10 + '0'); /* units of second number */

			if (first_number != 98 || second_number != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
