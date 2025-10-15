#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long i;
	unsigned long f1 = 1, f2 = 2, sum;
	/* split parts for big numbers (high and low) */
	unsigned long f1_high, f1_low, f2_high, f2_low;
	unsigned long high_sum, low_sum;
	const unsigned long BASE = 1000000000000000000UL; /* 10^18 */

	/* Print the first two terms */
	printf("%lu, %lu", f1, f2);

	/* Print terms 3..93 using unsigned long (safe) */
	for (i = 3; i <= 93; i++)
	{
		sum = f1 + f2;
		printf(", %lu", sum);
		f1 = f2;
		f2 = sum;
	}

	/* Prepare high/low parts for terms 94..98 */
	f1_high = f1 / BASE;
	f1_low = f1 % BASE;
	f2_high = f2 / BASE;
	f2_low = f2 % BASE;

	/* Compute and print terms 94..98 using high/low arithmetic */
	for (; i <= 98; i++)
	{
		low_sum = f1_low + f2_low;
		high_sum = f1_high + f2_high + (low_sum / BASE);
		low_sum = low_sum % BASE;

		/* print with zero-padded low part */
		printf(", %lu%018lu", high_sum, low_sum);

		/* shift forward */
		f1_high = f2_high;
		f1_low = f2_low;
		f2_high = high_sum;
		f2_low = low_sum;
	}

	printf("\n");
	return (0);
}
