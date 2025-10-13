#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by uppercase,
 *        followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	/* lowercase alphabet */
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	/* uppercase alphabet */
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
