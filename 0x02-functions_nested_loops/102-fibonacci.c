#include <stdio.h>

/**
 * fibonacci - function that print fibonacci series
 * @n: n as integer
 */
void fibonacci(int n)
{
	unsigned long int a = 1, b = 2, next;
	int i;

	printf("%u, %u, ", a, b);
	for (i = 1; i < n; i++)
	{
		next = a + b;
		printf("%u", next);
		a = b;
		b = next;
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}

/**
 * main - Entry point of program
 * Return: always return 0
 */
int main(void)
{
	fibonacci(50);
	return (0);
}
