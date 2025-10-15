#include <stdio.h>

/**
 * print_first_92 - prints the first 92 Fibonacci numbers
 * @f1: first number
 * @f2: second number
 */
void print_first_92(unsigned long *f1, unsigned long *f2)
{
	int count;
	unsigned long sum;

	for (count = 0; count < 92; count++)
	{
		sum = *f1 + *f2;
		printf("%lu", sum);

		if (count != 91)
			printf(", ");

		*f1 = *f2;
		*f2 = sum;
	}
}

/**
 * print_remaining - prints remaining Fibonacci numbers after 92nd
 * @f1: first number
 * @f2: second number
 */
void print_remaining(unsigned long f1, unsigned long f2)
{
	int count;
	unsigned long f1_half1, f1_half2, f2_half1, f2_half2;
	unsigned long half1, half2;

	f1_half1 = f1 / 10000000000;
	f1_half2 = f1 % 10000000000;
	f2_half1 = f2 / 10000000000;
	f2_half2 = f2 % 10000000000;

	for (count = 92; count < 98; count++)
	{
		half1 = f1_half1 + f2_half1;
		half2 = f1_half2 + f2_half2;

		if (half2 >= 10000000000)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf(", %lu%010lu", half1, half2);

		f1_half1 = f2_half1;
		f1_half2 = f2_half2;
		f2_half1 = half1;
		f2_half2 = half2;
	}
}

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1;

	print_first_92(&f1, &f2);
	print_remaining(f1, f2);
	printf("\n");

	return (0);
}
