#include <stdio.h>

/**
 * fibonacci - function that print fibonacci series
 * @n: n as integer
 */
void fibonacci(int n)
{
	long int a = 1, b = 2;
	long int i, next;
	
	printf("%ld, %ld, ", a, b);
	for (i = 1; i < n; i++)
	{
		printf("%ld", next);
		if (i < n)
		{
			printf(", ");
		}
		next = a + b;
		a = b;
		b = next;
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
