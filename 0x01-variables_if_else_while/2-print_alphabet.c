#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/* initiate the alphabet variable */
char alphabet;

/* now we want the alphabet to start from a to z,*/
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
/* initiate the alphabet variable */
putchar('\n');
return (0);
}
