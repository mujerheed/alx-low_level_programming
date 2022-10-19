#include <stdio.h>

/**
 * sum_even_fibonacci - function that print sum of fibonacci series that did not exceed 4mil
 * @n: n as integer
 */
void sum_even_fibonacci(int n)
{
	unsigned long int a = 1, b = 2, next, sum = 0;
	int i;

	for (i = 1; i < (n - 1); i++)
	{
		next = a + b;
		if ((next % 2 == 0) && next <= 4000000)
		{
			sum += next;
		}
		a = b;
		b = next;
	}
	printf("%lu", sum);
	putchar('\n');
}

/**
 * main - Entry point of program
 * Return: always return 0
 */
int main(void)
{
	sum_even_fibonacci(50);
	return (0);
}
