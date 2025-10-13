#include <stdio.h>

/**
 * main - prints all single digit numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		/* converts integer 0-9 to ASCII characters '0'-'9' */
		putchar(number + '0');
	}

	for (number = 0; number < 6; number++)
	{
		/* converts integer 0-5 to ASCII letters 'a'-'f' */
		putchar(number + 'a');
	}

	putchar('\n');
	return (0);
}
