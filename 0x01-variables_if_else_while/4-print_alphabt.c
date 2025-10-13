#include <stdio.h>

/**
 * main - prints all the alphabet in lowercase, except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);

		alphabet++; /* move to the next letter */
	}

	putchar('\n');
	return (0);
}
