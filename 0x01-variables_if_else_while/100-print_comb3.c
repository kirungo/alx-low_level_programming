#include <stdio.h>

/**
 * main - prints all possible combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_digit;
	int second_digit;

	for (first_digit = 0; first_digit <= 8; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit <= 9; second_digit++)
		{
			/**
			 * converts the digits to their ASCII character
			 * so putchar can print them as digits
			 */
			putchar(first_digit + '0');
			putchar(second_digit + '0');

			/* print comma and space only if number is NOT 89 */
			if (first_digit != 8 || second_digit != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
