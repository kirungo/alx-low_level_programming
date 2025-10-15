#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long f1 = 1, f2 = 2, sum;
	unsigned long f1_high, f1_low, f2_high, f2_low, high_sum, low_sum;

	for (i = 1; i <= 91; i++)
	{
		printf("%lu, ", f1);
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
	}

	f1_high = f1 / 1000000000000000000;
	f1_low = f1 % 1000000000000000000;
	f2_high = f2 / 1000000000000000000;
	f2_low = f2 % 1000000000000000000;

	for (; i <= 98; i++)
	{
		low_sum = (f1_low + f2_low);
		high_sum = (f1_high + f2_high) + (low_sum / 1000000000000000000);
		low_sum = low_sum % 1000000000000000000;

		if (i != 98)
			printf("%lu%018lu, ", high_sum, low_sum);
		else
			printf("%lu%018lu\n", high_sum, low_sum);

		f1_high = f2_high;
		f1_low = f2_low;
		f2_high = high_sum;
		f2_low = low_sum;
	}

	return (0);
}
