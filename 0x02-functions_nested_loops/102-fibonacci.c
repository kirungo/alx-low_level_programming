#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int first = 1, second = 2, next;
	int i;

	printf("%ld, %ld", first, second);

	for (i = 3; i <= 50; i++)
	{
		next = first + second;
		printf(", %ld", next);
		first = second;
		second = next;
	}

	printf("\n");
	return (0);
}
